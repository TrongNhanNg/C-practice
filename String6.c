#include<stdio.h>
//Equilibrium point 
//(which means sum on left and right of this point are equal)

int findEqui ( int arr[], int n)
{
    int i, l, r;
    
    for( int i = 0; i < n; i++)
    {
        int sumL = 0;
        int sumR = 0;
        for(l = 0; l < i; l++)
        sumL += arr[l];
        for(r = i +1; r < n; r++)
        sumR += arr[r];

        if( sumL == sumR)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {-7,1,5,2,-4,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Equiribrium point is: arr[%d]\n", findEqui(arr, n));
    return 0;
}