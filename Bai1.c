#include <stdio.h>
#include <math.h>

//tinh tong 1/1 + 1/2 +...+ 1/n


void Tong(int n)
{   
    
    double sum = 0;
    for ( int i = 1; i <= n;i++)
    {
        sum += ((double) 1/i);
        printf("%lf\n",sum);
    }
    printf("Tong la %.2lf\n",sum);
    
    
}

int main ()
{
    int n ;
    scanf("%d", &n);
    Tong( n);
    
    return 0;
}


// double s(int n){
//     double res = 0;
//     for ( int i = 1; i <= n ; i++) res += (double) 1/i ;
//     return res;
// }

// int main ()
// {
//     int n = 10;
//     double res = s(n);
//     printf("%.2lf\n", res);
//     return 0;
// }