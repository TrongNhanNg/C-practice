#include <stdio.h>

int main() {

  int i = 0;

  while (i <= 9) {
    // Figure out how to skip the print of 5 here
    
    i++;
    if ( i == 5)
    {
      continue;
    }
    
    printf("%d\n", i);
    
  }
}