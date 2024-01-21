#include <stdio.h>

void printRow(int arr[][24], int n, int row);

int temps[7][24] = {0};

int main(void) {

  printRow(temps, 0, 2);

      return 0;
}

void printRow(int arr[][24], int n, int row) {
    int i = 0;
  for (int *p = arr[row]; p < arr[row + 1]; p++) {
    printf(" %d", *p);
    i++;
  }
  printf("\n Num: %d\n", i);
}
