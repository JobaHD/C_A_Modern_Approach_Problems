/* Finds how many digits a numbers has */
#include <stdio.h>

int main(void) {
  int number, digitsNum;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (number <= 9) {
    digitsNum = 1;
  } else if (number <= 99) {
    digitsNum = 2;
  } else if (number <= 999) {
    digitsNum = 3;
  } else if (number <= 9999) {
    digitsNum = 4;
  } else {
    digitsNum = 5;
  }

  printf("The number %d has %d digits\n", number, digitsNum);

  return 0;
}
