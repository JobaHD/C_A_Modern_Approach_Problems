#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void) {
  char arr[10][10];
  srand((unsigned)time(NULL));
  int lastCol = 0;
  int lastRow = 0;
  char currChar = 'A';
  int direction;
  int up, down, left, right;
  up = down = left = right = 0;

  // fill array with empty cells
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      arr[i][j] = '.';
    }
  }

  // Move around cells
  // 0: down
  // 1: right
  // 2: up
  // 3: left
  //
  // Start off with A at [0][0]
  arr[lastCol][lastRow] = currChar++;
  while (currChar <= 'Z') {
    printf("Current character: %c\n", currChar);
    printf("Loop condition: %d\n", currChar <= 0);
    printf("Direction: %d\n", direction);
    printf("LastCol: %d\n", lastCol);
    printf("LastRow: %d\n", lastRow);

    if (lastCol + 1 < SIZE && arr[lastRow][lastCol + 1] == '.') {
      down = 1;
    } if (lastRow + 1 < SIZE && arr[lastRow + 1][lastCol] == '.') {
      right = 1;
    }
    if (lastCol - 1 > 0 && arr[lastRow][lastCol - 1] == '.') {
      up = 1;
    }
    if (lastRow - 1 > 0 && arr[lastRow - 1][lastCol] == '.') {
      left = 1;
    }

    if (up + down + right + left == 0) {
      break;
    }

    direction = rand() % 4;

    switch (direction) {
    case 0:
      if (down) {
        lastCol++;
        break;
      }
      continue;
    case 1:
      if (right) {
        lastRow++;
        break;
      }
      continue;
    case 2:
      if (up) {
        lastCol--;
        break;
      }
      continue;
    case 3:
      if (left) {
        lastRow--;
        break;
      }
      continue;
    }
    arr[lastRow][lastCol] = currChar;
    currChar++;
  }

  // print all cells
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      printf("%c ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
