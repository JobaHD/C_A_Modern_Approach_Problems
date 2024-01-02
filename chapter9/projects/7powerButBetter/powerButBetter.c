#include <stdio.h>

int power(int x, int n);

int main(void) {
  int n;
  int x;

  printf("Enter a number to raise to the nth power: ");
  scanf("%d", &x);

  printf("Enter n: ");
  scanf("%d", &n);

  printf("%d to the %dth is %d", x, n, power(x, n));

  return 0;
}

int power(int x, int n) {
  if (n == 0) {
    return 1;
  }

  if (n % 2 == 0) {
    int res = power(x, n / 2);
    return res * res;
  } else {
    return x * power(x, n - 1);
  }
}
