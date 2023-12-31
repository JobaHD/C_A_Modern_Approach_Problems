#include <stdio.h>
int numDigits(int n) {
  int i = 0;
  do {
    i++;
  } while ((n /= 10) != 0);

  return i;
}

int main(void) {

  printf("Number of digits in 2342: %d\n", numDigits(2342));
  return 0;
}
