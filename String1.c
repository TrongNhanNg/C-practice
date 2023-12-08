#include<stdio.h>
#include<string.h>

void remove_firstandlast(char * dst, const char * src)
{
  int src_len = strlen(src);
  printf("Lenght of uncut: %d\n",src_len);
  printf("src is: %s\n",src);
  for(int i =0; i < src_len; i++)
  {
    printf("src at %d : %c \n", i, src[i]);
  }
  printf("Processing.....\n");

  strcpy(dst, src +1); // cut the first char 
  dst[strlen(dst)-1] = '\0'; // cut the last char
  int dst_len = strlen(dst);
  printf("Lenght of cut dst: %d\n", dst_len);
  for(int i =0; i < dst_len; i++)
  {
    printf("dst cutted at %d : %c \n", i, dst[i]);
  }
  
}

int main() {
  char color[5] = "green";
  char result[5];
  
  remove_firstandlast(result, color);



  return 0;
}