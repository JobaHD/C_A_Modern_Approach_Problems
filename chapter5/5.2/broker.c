#include <stdio.h>

int main(void) {
  float value, commission;

  printf("Enter the value of the trade: ");
  scanf("%f", &value);

  if (value < 2500.0f) {
    commission = 30.0f + (value * 0.017f);
  } else if (value < 6250.0f) {
    commission = 56.0f + (value * 0.0066f);
  } else if (value < 20000.0f) {
    commission = 76.0f + (value * 0.0034f);
  } else if (value < 50000.0f) {
    commission = 100.0f + (value * 0.0022f);
  } else if (value < 500000.0f) {
    commission = 155.0f + (value * 0.0011f);
  } else {
    commission = 255.0f + (value * 0.0009f);
  }

  if (commission < 39.0f) {
      commission = 39.0f;
  }

  printf("Commission: $%.2f\n", commission);

  return 0;
}
