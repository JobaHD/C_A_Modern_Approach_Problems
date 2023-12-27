#include <stdio.h>
#define LENGTH 5

int main(void) {
  int array2D[LENGTH][LENGTH];
  int colSumArr[LENGTH] = {0};
  int rowSumArr[LENGTH] = {0};

  for (int i = 0; i < LENGTH; i++) {
    printf("Enter row %d: ", i + 1);
    for (int j = 0; j < LENGTH; j++) {
      scanf("%d", &array2D[i][j]);
      rowSumArr[i] += array2D[i][j];
      colSumArr[j] += array2D[i][j];
    }
  }

  printf("Row totals: ");
  for (int i = 0; i < LENGTH; i++) {
    printf("%d ", rowSumArr[i]);
  }

  printf("\nColumn totals: ");
  for (int i = 0; i < LENGTH; i++) {
    printf("%d ", colSumArr[i]);
  }

  return 0;
}
