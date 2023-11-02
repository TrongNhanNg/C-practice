#include <stdio.h>

//Arr input
void input( int arr[],int n)
{
    
    for (int i = 0; i < n; i++)
    {   
        printf("Arr[%d] = ", i);
        fflush(stdout);
        scanf("%d", &arr[i]);
    }
}

//Arr output
void output(int arr[], int n)
{  
    printf("Arr output: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

//Search for X value in arr
void find(int arr[], int n)
{
    int x ;
    printf("Input X to search: \n");
    scanf("%d", &x);
    
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if ( arr[i] == x)
        {
            printf("X at: arr[%d] \n", i );
            ans = 1;
        }
    }
    if( ans == 0)
        printf("No X in arr \n");
    
}
// Find Max
int max(int arr[], int n)
{
    int max = 0;
    for ( int i = 0; i < n; i++)
    {
        if( arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main() {

int n1, n2;
printf("Nhap n1:");
fflush(stdout);
scanf("%u", &n1);
int arr1[n1];
input(arr1, n1);


// printf("Nhap n2:");
// scanf("%d", &n2);
// int arr2[n2];
// input(arr2, n2);

output(arr1,n1);
// output(arr2,n2);

find(arr1,n1);
// find(arr2,n2);

printf("Max of arr: %d \n", max(arr1, n1));

return 0;
}