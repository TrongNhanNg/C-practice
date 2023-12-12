#include<stdio.h>
//Array of N-1 integer, 1 to N, find missing number
// ex: {2,3,1,4,7,5,6,8,10} N = 10

void findmissing( int arr[], int n)
{
    for( int i = 0; i < n - 2; i++)
    {
        for( int j = i + 1; j < n-1; j++)
        {
            if( arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //Print out ascending arr
    for( int i = 0; i < n-1; i++)
    {
        printf("arr[%d]: %d\n", i, arr[i]);
    }
    //Find missing number:
    for(int i = 0; i < n - 2; i++)
    {
        if(arr[i+1] - arr[i] == 2)
        {
            int ans = arr[i+1] -1;
            printf("Missing number = %d \n", ans);
        }
    }
}   
int main()
{
    int arr[] = {2,3,1,4,7,5,6,8,10};
    int n = 10;
    findmissing(arr,n);
    return 0;
}