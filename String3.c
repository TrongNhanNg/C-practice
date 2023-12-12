#include<stdio.h>
//Find sub-array which sum equa given sum

void subarray( int arr[], int n, int sum)
{
    int count = 0;
    for( int i = 0; i < n; i++)
    {
        int altsum = arr[i];
        if( altsum == sum)
        {
            printf("Found at arr[%d]\n", i);
            count += 1;
        }
        else
        {
            for( int j = i + 1; j < n; j++)
            {
                altsum = altsum + arr[j];
                if( altsum == sum)
                {
                    printf("Found between %d and %d, \n",i,j);
                    count += 1;
                }
            }
        }
    }
    if(count == 0)
    {
        printf("No subarray found.\n");
    }   
}

int main()
{
    int arr[] = {12, 2, 4, 8, 9, 5, 10, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 12;
    subarray( arr, n, sum);
    return 0;
}