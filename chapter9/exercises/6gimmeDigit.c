#include <stdio.h>
int digit(int n, int k) {
  int digit;
  while (k-- != 0) {
    digit = n % 10;
    n /= 10;
  }

  return digit;
}

int main(void) {
  int num = 829;
  printf("Digit 1 of %d: %d\n", num, digit(829, 1));
  printf("Digit 2 of %d: %d\n", num, digit(829, 2));
  printf("Digit 3 of %d: %d\n", num, digit(829, 3));
  printf("Digit 4 of %d: %d\n", num, digit(829, 4));

  return 0;
}
