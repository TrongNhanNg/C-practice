#include<stdio.h>

int main() {
  
  int k = 2000;
  int* ptr = &k;
  

  printf("%p\n", &k);   //
  printf("%p\n", ptr);  // is the pointer itself.
  printf("%d\n", *ptr); // is the value it points to.
  printf("%p\n", &ptr); // is the address of the pointer.


  printf("------------------------------------------------------------------\n");
  // Checkpoint 1 code goes here.
  printf("%i\n", k);
  printf("%d\n", *ptr);
  // Checkpoint 2 code goes here.
  *ptr = 961;
  printf("%i\n", k); // Notice how this variable changed value after Checkpoint 2!
  printf("%d\n", *ptr);
}
