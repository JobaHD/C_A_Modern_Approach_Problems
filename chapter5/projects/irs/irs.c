#include <stdio.h>

int main(void) {
  float income, taxes;

  printf("Enter your income: ");
  scanf("%f", &income);

  if (income < 750) {
    taxes = 0.01 * income;
  } else if (income <= 2250.0f) {
    taxes = 7.50f + (0.02f * (income - 750.0f));
  } else if (income <= 3750.0f) {
    taxes = 37.50f + (0.03f * (income - 2250.0f));
  } else if (income <= 5250.0f) {
    taxes = 82.50f + (0.04f * (income - 3750.0f));
  } else if (income <= 7000.0f) {
    taxes = 142.5f + (0.05f * (income - 5250.0f));
  } else {
    taxes = 230.0f + (0.06f * (income - 7000));
  }

  printf("Taxes: %.2f", taxes);

    return 0;
  }
