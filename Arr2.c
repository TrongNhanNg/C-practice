#include<stdio.h>

int max(int arr[], int n)
{
    int max = 0;
    for ( int i =0 ; i < n; i++)
    {
        if( arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n ;
    scanf("%d", &n);
    int arr[n];
    for ( int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int n2 ;
    scanf("%d", &n2);
    int arr2[n2];
    for ( int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    
    printf("%d", max(arr,n));
    printf("%d", max(arr2,n2));

    return 0;
}