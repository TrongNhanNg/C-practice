#include<stdio.h>
#include<string.h>

void inputwspace(char * str)
{
    printf("Fgets input:\n");
    fgets(str,100,stdin);
    printf("Processing.....\n");
    printf("Str output:\n%s\n", str);
}

int main()
{
    char str1[100];
    inputwspace(str1);
    return 0;
}