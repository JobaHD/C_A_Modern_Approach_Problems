#include <stdio.h>
#define INITIAL_BALANCE 100.0
#define NUM_RETURNS ((int)(sizeof(returns) / sizeof(returns[0])))

int main(void) {
  int years;
  float interestRate, returns[5];

  printf("Enter the amount of years: ");
  scanf("%d", &years);
  printf("Enter the interest rate: ");
  scanf("%f", &interestRate);

  printf("\nYears");
  for (int i = 0; i < NUM_RETURNS; i++) {
    printf("%6.0f%%", interestRate + i);
    returns[i] = INITIAL_BALANCE;
  }

  for (int j = 0; j < years; j++) {
    printf("\n%3d    ", j + 1);
    for (int i = 0; i < NUM_RETURNS; i++) {
      float newInterest = 1.0 + ((interestRate + i) / 100.0);
      returns[i] = returns[i] * newInterest;
      printf("%7.2f", returns[i]);
    }
  }

  return 0;
}
