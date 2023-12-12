#include<stdio.h>
//Bitwise:
//Find missing number
//Ex:

int findmissing( int arr[], int n)
{
    int i;

    //For xor of all the elements in array
    int x1 = arr[0];
    
    //for xor of all the elements from 1 to n+1 
    int x2 = 1;
    
    for (i = 1; i < n; i++)
    {
        x1 = x1^arr[i];
        printf("x1[%d] = %d \n", i, x1);
    }
    printf("\n");
    for(i =2; i <= n + 1; i++)
    {
        x2 = x2 ^ i;
        printf("x2[%d] = %d \n", i, x2);
    }
    printf("x1 = %d \nx2 = %d \n",x1,x2);
    return (x1 ^ x2);
}
//Driver code
int main()
{
    int arr[] = {2,3,1,4,7,5,6,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int missNum = findmissing(arr, n);
    printf("Missing number = %d", missNum);
}
