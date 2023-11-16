#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter number of element: \n");
    scanf("%d", &n);
    ptr = (int*)malloc(n * sizeof(int));
    
    if(ptr == NULL)
    {
        printf(" Fail");
        exit(0);
    }
    for(i = 0; i < n; i++)
    {
        printf("Input value: %d \n", i+1);
        printf("Value of ptr[%d] = %d \n",i+1,*(ptr+i));
        scanf("%d",ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %d \n", sum);
    
    for (i = 0; i < n; i++)
    {
        printf("Value of ptr[%d] = %d \n",i+1,*(ptr+i));
    }
    free(ptr);
    return 0;
}