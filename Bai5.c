#include <stdio.h>
#include <math.h>




// Tinh luy thua



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