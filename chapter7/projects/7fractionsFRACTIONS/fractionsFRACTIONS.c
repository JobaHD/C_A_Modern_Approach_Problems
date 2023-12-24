/* Math two fractions together */
#include <stdio.h>

int main(void) {
  int num1, denom1, num2, denom2, resultNum, resultDenom;
  char operation;

  printf("Enter two fractions separated by an operation: ");
  scanf("%d/%d %c %d/%d", &num1, &denom1, &operation, &num2, &denom2);
  printf("%d\n", num1);
  printf("%d\n", denom1);
  printf("%c\n", operation);
  printf("%d\n", num2);
  printf("%d\n", denom2);

  switch (operation) {
  case '+':
    resultNum = num1 * denom2 + num2 * denom1;
    resultDenom = denom1 * denom2;
    break;
  case '-':
    resultNum = num1 * denom2 - num2 * denom1;
    resultDenom = denom1 * denom2;
    break;
  case '*':
    resultNum = num1 * num2;
    resultDenom = denom1 * denom2;
    break;
  case '/':
    resultNum = num1 * denom2;
    resultDenom = denom1 * num2;
    break;

  }

  printf("Resulting fraction: %d/%d\n", resultNum, resultDenom);
  return 0;
}
