#include <stdio.h>
#define SIZE (sizeof(magicSquare) / sizeof(magicSquare[0]))

int main(void) {
  int n;

  printf("Enter the size of the magic square: ");
  scanf("%d", &n);
  int magicSquare[n][n];
  int lastRow = 0, lastCol = n / 2;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      magicSquare[i][j] = 0;
    }
  }

  magicSquare[lastRow][lastCol] = 1;

  for (int i = 2; i <= n * n; i++) {
    lastRow = ((lastRow - 1) + n) % n;
    lastCol = (lastCol + 1) % n;
    //check if cell is empty
    if (magicSquare[lastRow][lastCol] == 0) {
      magicSquare[lastRow][lastCol] = i;
    } else {
        // not empty: walk back motion, and add 1 to row.
      lastRow = (lastRow + 1) % n;
      lastCol = ((lastCol - 1) + n) % n;
      lastRow++;
      magicSquare[lastRow][lastCol] = i;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", magicSquare[i][j]);
    }
    printf("\n");
  }

  return 0;
}
