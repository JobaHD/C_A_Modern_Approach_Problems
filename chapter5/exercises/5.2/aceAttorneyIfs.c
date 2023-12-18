#include <stdio.h>

int main(void) {
  int n = 0;

  if (n >= 1 <= 10) {
    // printf("1n is between 1 and 10\n");
  }

  n = 5;
  if (n == 1 - 10) {
    // printf("2n is between 1 and 10\n");
  }

  int i = 17;
  printf("%d\n", i >= 0 ? i : -i);

  i = -17;
  printf("%d\n", i >= 0 ? i : -i);

  return 0;
}
