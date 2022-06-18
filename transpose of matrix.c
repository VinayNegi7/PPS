/*program for transpose of matrix*/
#include <stdio.h>
int main() {
  int a[10][10], n, i, j;

  printf("Enter the value of N: ");
  scanf("%d", &n);
  printf("Enter the elements of Matrix-A: \n");

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  printf("Transpose of Matrix-A: \n");

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d \t", a[j][i]);
    }
    printf("\n");
  }
 /*1 2   1 3
      =
  3 4   2 4*/


  return 0;
}
