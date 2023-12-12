#include<stdio.h>
//Find leaders in array
//Ex: {16,17,4,3,5,2} =>> Leaders: 17,5 ( exclude last number)

void findleader( int arr[], int n)
{
    int i, j;
    for(i = 0; i < n-1; i++)
    {
        for(j = i + 1; j < n; j++ )
        { 
            if( arr[i] <= arr[j])
            {
                break;
            }
        }
        if(j == n)
        {
            printf("Leader in array = %d\n", arr[i]);
        }
    }
}
int main()
{
    int arr[] = {16,17,4,3,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    findleader( arr, n);
    return 0;
}