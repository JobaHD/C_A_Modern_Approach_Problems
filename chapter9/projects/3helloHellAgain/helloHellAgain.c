#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void genRandWalk(char walk[10][10]);
void printArr(char walk[10][10]);

int main(void) {
  char arr[10][10];

  genRandWalk(arr);
  printArr(arr);

  return 0;
}

void genRandWalk(char walk[10][10]) {
  srand((unsigned)time(NULL));
  int lastCol = 0;
  int lastRow = 0;
  char currChar = 'A';
  int direction = -1;
  int up, down, left, right;
  up = down = left = right = 0;

  // fill array with empty cells
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      walk[i][j] = '.';
    }
  }

  // Move around cells
  // 0: down
  // 1: right
  // 2: up
  // 3: left
  //
  // Start off with A at [0][0]
  walk[lastCol][lastRow] = currChar++;
  while (currChar <= 'Z') {
    up = down = left = right = 0;

    if (lastCol + 1 < SIZE && walk[lastRow][lastCol + 1] == '.') {
      down = 1;
    }
    if (lastRow + 1 < SIZE && walk[lastRow + 1][lastCol] == '.') {
      right = 1;
    }
    if (lastCol - 1 > 0 && walk[lastRow][lastCol - 1] == '.') {
      up = 1;
    }
    if (lastRow - 1 > 0 && walk[lastRow - 1][lastCol] == '.') {
      left = 1;
    }

    if (up + down + right + left == 0) {
      break;
    }

    direction = rand() % 4;

    // if direction not available, redo loop for randomizer
    // Only other way I can think is a fall through but that would be more
    // predictable and defeat the purpose of random
    // P.S. This took a whole day, fuck it
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
    default:
      continue;
    }
    walk[lastRow][lastCol] = currChar;
    currChar++;
  }
}

void printArr(char walk[10][10]) {
  // print all cells
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      printf("%c ", walk[i][j]);
    }
    printf("\n");
  }
}
