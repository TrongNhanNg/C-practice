#include<stdio.h>

// Printf out max of unsigned int

int main()
{
    unsigned int max;
    max = 0;
    max = ~max;
    printf("Max value: %u \n", max);
    return 0;
}