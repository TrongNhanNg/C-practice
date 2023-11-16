#include<stdio.h>
#include<stdlib.h>
// Deallocating a memory pointer 
// by ptr causes dangling pointer

int main()
{
    int * ptr = (int*)malloc(sizeof(int));
    printf("%p \n",ptr);

    // After below free call, 
    // ptr becomes a dangling pointer
    free(ptr);
    printf("%p \n",ptr);
    // Value pointed to by ptr after freeing: 
    // Segmentation fault (core dumped)
    
    // No more dangling pointer 
    ptr = NULL;
    printf("%p \n",ptr);
    return 0;
}