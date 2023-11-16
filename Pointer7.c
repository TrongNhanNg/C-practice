#include<stdio.h>
#include<stdlib.h>

// Void Pointer

int main()
{
    int x = 4;
    float y = 5.5;
    // A void pointer 
    void * ptr;
    ptr = &x;

    // (int*)ptr - does type casting of void
    // *((int*)ptr) dereferences the typecasted

    // void pointer variable.
    printf("Integer variable is: %d", *((int*)ptr));
    // void pointer is now float
    ptr = &y;
    printf("\n Float variable is: %f \n",*((float*)ptr));

    return 0;
}