#include <stdio.h>

int gcd(int m, int n) {
  int remainder;
  while (n != 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }

  return m;
}

int main(void) {
  int m = 12345, n = 2875;

  printf("The gcd of %d and %d is: %d\n", m, n, gcd(m, n));

  return 0;
}
