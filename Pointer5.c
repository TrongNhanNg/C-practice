#include<stdio.h>
#include<stdlib.h>
// CALLOC() & MALLOC
int main() {
  // Allocate memory using malloc()
  int *malloc_array = malloc(10 * sizeof(int));

  // Check if the memory was allocated successfully
  if (malloc_array == NULL) {
    printf("Error allocating memory\n");
    return 1;
  }

  // Allocate memory using calloc()
  int *calloc_array = calloc(10, sizeof(int));

  // Check if the memory was allocated successfully
  if (calloc_array == NULL) {
    printf("Error allocating memory\n");
    return 1;
  }

  // Initialize the malloc_array
  for (int i = 0; i < 10; i++) {
    malloc_array[i] = i;
  }

  // Print the values in the malloc_array
  printf("Values in malloc_array:\n");
  for (int i = 0; i < 10; i++) {
    printf("%d\n", malloc_array[i]);
  }

  // Print the values in the calloc_array
  printf("Values in calloc_array:\n");
  for (int i = 0; i < 10; i++) {
    printf("%d\n", calloc_array[i]);
  }

  // Free the memory allocated by malloc()
  free(malloc_array);

  // Free the memory allocated by calloc()
  free(calloc_array);

  return 0;
}