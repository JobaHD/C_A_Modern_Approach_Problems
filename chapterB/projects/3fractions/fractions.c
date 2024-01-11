#include <stdio.h>

void reduce(int num, int denom, int *reducNum, int *reducDenom);

int main(void) {
  int num, denom, reducNum, reducDenom;

  printf("Enter a fraction: ");
  scanf("%d/%d", &num, &denom);

  reduce(num, denom, &reducNum, &reducDenom);

  printf("The simplified fraction is: %d/%d ", reducNum, reducDenom);

  return 0;
}

void reduce(int num, int denom, int *reducNum, int *reducDenom) {
  int gcd = num;
  int n = denom;
  int remainder;
  while (n != 0) {
    remainder = gcd % n;
    gcd = n;
    n = remainder;
  }

  *reducNum = num / gcd;
  *reducDenom = denom / gcd;
}
