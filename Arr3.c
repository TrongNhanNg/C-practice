#include<stdio.h>
 

// Number of elements in array


int main() {
  int arr[] = {3, 2, 10, 6, 18, 5, 8, 4, 0, 9}; 
  int len = sizeof(arr)/sizeof(int);
  printf("Number of elements: %d\n", len);
  for(int i = 0; i < len; i++)
  {
    printf("%i\t", arr[i]);
  }
    printf("end of arr\n");

  int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}}; 
  int sum = 0;
  for ( int i = 0; i < sizeof(matrix)/sizeof(matrix[0]); i++ )
    {
    for( int j = 0; j < sizeof(matrix[0])/sizeof(int);j++)
        {
            sum += matrix[i][j];
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }
    printf(" Sum of matrix: %d\n", sum);



  return 0;
}