#include <stdio.h>

void decompose(double x, long *intPart, double *fracPart);

int main(void) {
  double x, fracPart;
  long intPart;

  printf("Enter a decimal num: ");
  scanf("%lf", &x);

  decompose(x, &intPart, &fracPart);

  printf("Int part: %ld\n", intPart);
  printf("Frac part: %f\n", fracPart);

  return 0;
}

void decompose(double x, long *intPart, double *fracPart) {
  *intPart = (long)x;
  *fracPart = x - *intPart;
}
