#include <stdio.h>

int main(void) {
  int num, denom, remainder, gcd, n;

  printf("Enter a fraction: ");
  scanf("%d/%d", &num, &denom);

  gcd = num;
  n = denom;
  while (n != 0) {
    remainder = gcd % n;
    gcd = n;
    n = remainder;
    // n is the GCD.
  }

  printf("The simplified fraction is: %d/%d ", num / gcd, denom / gcd);

  return 0;
}
