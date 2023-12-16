#include <stdio.h>

int main(void) {
  int _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16;
  int row1, row2, row3, row4;
  int col1, col2, col3, col4;
  int diag1, diag2;

  printf("Enter the numbers from 1 to 16 in any order: ");
  scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &_1, &_2, &_3, &_4, &_5, &_6, &_7,
        &_8, &_9, &_10, &_11, &_12, &_13, &_14, &_15, &_16);

  printf("%2d %2d %2d %2d\n", _1, _2, _3, _4);
  printf("%2d %2d %2d %2d\n", _5, _6, _7, _8);
  printf("%2d %2d %2d %2d\n", _9, _10, _11, _12);
  printf("%2d %2d %2d %2d\n", _13, _14, _15, _16);

  row1 = _1 + _2 + _3 + _4;
  row2 = _5 + _6 + _7 + _8;
  row3 = _9 + _10 + _11 + _12;
  row4 = _13 + _14 + _15 + _16;

  printf("Row sums: %2d %2d %2d %2d\n", row1, row2, row3, row4);

  col1 = _1 + _5 + _9 + _13;
  col2 = _2 + _6 + _10 + _14;
  col3 = _3 + _7 + _11 + _15;
  col4 = _4 + _8 + _12 + _16;

  printf("Column sums: %2d %2d %2d %2d\n", col1, col2, col3, col4);

  diag1 = _1 + _6 + _11 + _16;
  diag2 = _4 + _7 + _10 + _13;

  printf("Diagonal sums: %2d %2d\n", diag1, diag2);

  return 0;
}
