#include <stdio.h>

void output( int arr[], int n)
{   
    printf("Output: \n");
    for ( int i = 0 ; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main ()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0 ; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    output(a,n);
    return 0;
}
