#include <stdio.h>
#include <math.h>




// Tinh luy thua



// int main (){

// int a, b;
// int x = 1;
// scanf("%d %d", &a, &b);

// for ( int i =1 ; i <=b ; i++ )
// {
//     x *= a;
// }
// printf("%d\n",x);
// return 0;
// }

int main (){
int i = 1;
int x = 1;
int a, b;

scanf("%d %d", &a, &b);

while ( i <=b)
{
    x *= a;
    i++;
}
printf("%d\n",x);
return 0;
}