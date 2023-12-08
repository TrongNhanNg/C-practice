#include<stdio.h>
// Printf out 1 to 20 without using loop

int main()
{
    int sum = 0;
    
    update:
    sum++;
    printf("%d\n", sum);
    if(sum == 20)
    {
        return 0;
    }
    goto update;
    
}