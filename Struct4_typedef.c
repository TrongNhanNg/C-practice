//The use of typedef struct

#include<stdio.h>

struct Point1
{
  int x;
  int y;
};

typedef struct Point2
{
    int a;
    int b;
}Point2;


int main() 
{
    struct Point1 p1;
    p1.x = 1;
    p1.y = 3;
    printf("%d \n", p1.x);
    printf("%d \n", p1.y);

    Point2 p2; //No need to begin w struct keyword
    p2.a = 2;
    p2.b = 4;
    printf("%d \n", p2.a);
    printf("%d \n", p2.b);
    return 0;
}