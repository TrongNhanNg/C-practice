#include<stdio.h>

int main()
{
    int var = 10;
    // Declaring pointer variable to store address of var
    int * ptr = &var;

    printf("The address of var: %d \n", &var);
    printf("The value of var using ptr: %d \n", *ptr);
    printf("The address of var in decimal using ptr: %d \n", ptr);
    printf("The address of var in hexadecimal using ptr: %p \n", ptr);
    printf("The address of ptr in decimal: %d \n", &ptr);
    printf("The address of ptr in hexadecimal: %p \n", &ptr);

    return 0;

}