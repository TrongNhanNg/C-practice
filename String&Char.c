#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
//Difference between String and Char

int main()
{
    char ch;
    char str[100];
    printf("Char ch input:\n");
    scanf("%c",&ch);
    printf("String str input:\n");
    scanf("%s",&str);    //No space

    int len_str = strlen(str);
    int sz_str = sizeof(str);
    int len_ch = strlen(ch);
    int sz_ch = sizeof(ch);

    printf("Char output: %c\n",ch);
    printf("String output: %s\n",str);
    printf("String lenght: %d\n",len_str);
    printf("String size: %d\n",sz_str);
    printf("Char lenght: %d\n",len_ch);
    printf("Char size: %d\n",sz_ch);
    return 0;

}