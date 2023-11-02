#include<stdio.h>
#include<string.h>

int main() {
  

  int len1, len2, len3;
  char s1[] = "Hello";
  char s2[len1];
  char s3[]= {'W','o','r','l','d','\0'}; //size = 6: 5 ki tu va 1 ki tu null
  len1 = strlen(s1) ;
  printf("len1: %d\n", len1);
  printf("%d\n", len1);

  strcpy(s2,s1);
  printf("%s\n", s2);

  len3 = strlen(s3);
  printf("len3: %d\n", len3);
  printf("Size of s3: %d\n", sizeof(s3));


  return 0;
}