#include <stdio.h>

int main(void) {
  int x, total;

  printf("Give me your VAR: ");
  scanf("%d", &x);

  total = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) -
          1 * (x * x) + 7 * x - 6;

  printf("Here's your total: %d\n", total);
  return 0;
}
