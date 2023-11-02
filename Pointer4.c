#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr1;
    ptr1 = (int*) malloc(3 * sizeof(int));

    if( ptr1 == NULL)
    {
        printf("Memory not allocated. \n");
        printf("ptr1 address: %p \n", ptr1);
        exit(0);
    }
    else
    {
        printf("Memory allocated succesfully. \n");
        printf("ptr1 address: %p \n", ptr1);
        printf("ptr1 value: %d \n", *ptr1);
        for( int i = 0; i < 3; i++)
            ptr1[i] = i;
        for( int i = 0; i < 3; i++)
            printf("%d\n",ptr1[i]);
        printf("Section 1 done.\n");


        *ptr1=10;
        printf("ptr1 value: %d \n", *ptr1);
        for( int i = 0; i< 3; i++)
            printf("%d\n",ptr1[i]);
        free(ptr1);
        if( ptr1 == NULL)
        {
            printf("Memory not allocated. \n");
            printf("ptr1 address: %p \n", ptr1);
            printf("ptr1 value: %d \n", *ptr1);
            for( int i = 0; i < 3; i++)
                printf("%d \n", ptr1[i]);
        }
        printf("ptr1 address: %p \n", ptr1);
        
        return 0;

    }
}