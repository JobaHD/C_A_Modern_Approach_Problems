#include <stdio.h>

int check(int x, int y, int n) {
  return ((x <= n && x >= 0) && (y <= n && y >= 0));
}

int main(void) {
  int x = 2, y = 0, n = 1;

  printf("Check where x = %d, y = %d, n = %d: %d\n", x, y, n, check(x, y, n));

  x = 1, y = 0, n = 1;
  printf("Check where x = %d, y = %d, n = %d: %d\n", x, y, n, check(x, y, n));


  return 0;
}
