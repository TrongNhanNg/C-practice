#include <stdio.h>

//ham nhap mang
void input( int arr[],int n)
{
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

//ham xuat mang
void output(int arr[], int n)
{  
    printf("Arr output: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

//ham tim kiem
int find(int arr[], int n)
{
    int x ;
    printf("Nhap x: \n");
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if ( arr[i] == x)
        {
            printf("x nam tai vi tri: arr[%d]\n", i);
        }
        else 
        {
            printf("x ko co trong arr\n");
        }
    }
    
}


int main() {

int n1, n2;
printf("Nhap n1:");
scanf("%d", &n1);
int arr1[n1];
input(arr1, n1);


printf("Nhap n2:");
scanf("%d", &n2);
int arr2[n2];
input(arr2, n2);

output(arr1,n1);
output(arr2,n2);

find(arr1,n1);
find(arr2,n2);

return 0;
}