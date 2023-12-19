/* Checks the validity of inputted UPC numbers */
#include <stdio.h>

int main(void) {
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, firstSum, secondSum, total,
      inputtedCheckDigit, computedCheckDigit;

  printf("Enter the 12 digits of a UPC: ");
  scanf("%1d", &d);
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
  scanf("%1d", &inputtedCheckDigit);

  firstSum = d + i2 + i4 + j1 + j3 + j5;
  secondSum = i1 + i3 + i5 + j2 + j4;
  total = 3 * firstSum + secondSum;
  computedCheckDigit = 9 - ((total - 1) % 10);

  printf("Your check digit is: ");
  if (inputtedCheckDigit == computedCheckDigit) {
    printf("correct");
  } else {
    printf("incorrect");
  }
  printf(".\n");

  return 0;
}
