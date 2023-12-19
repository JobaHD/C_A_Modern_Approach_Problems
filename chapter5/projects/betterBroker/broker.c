#include <stdio.h>

int main(void) {
  float value, pricePerShare, ogCommission, newCommission;
  int shareNum;

  printf("Enter the number of shares: ");
  scanf("%d", &shareNum);
  printf("Enter the price per share: ");
  scanf("%f", &pricePerShare);

  value = shareNum * pricePerShare;

  if (value < 2500.0f) {
    ogCommission = 30.0f + (value * 0.017f);
  } else if (value < 6250.0f) {
    ogCommission = 56.0f + (value * 0.0066f);
  } else if (value < 20000.0f) {
    ogCommission = 76.0f + (value * 0.0034f);
  } else if (value < 50000.0f) {
    ogCommission = 100.0f + (value * 0.0022f);
  } else if (value < 500000.0f) {
    ogCommission = 155.0f + (value * 0.0011f);
  } else {
    ogCommission = 255.0f + (value * 0.0009f);
  }

  if (ogCommission < 39.0f) {
    ogCommission = 39.0f;
  }

  if (shareNum < 2000) {
    newCommission = 33 + (0.03 * shareNum);
  } else {
    newCommission = 33 + (0.02 * shareNum);
  }

  printf("OG broker commission: $%.2f\n", ogCommission);
  printf("New broker commission: $%.2f\n", newCommission);

  return 0;
}
