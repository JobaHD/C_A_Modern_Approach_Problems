#include <stdio.h>

int main(void) {
  int x, total;

  printf("Give me your VAR: ");
  scanf("%d", &x);

  total = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;

  printf("Here's your total: %d\n", total);
  return 0;
}
