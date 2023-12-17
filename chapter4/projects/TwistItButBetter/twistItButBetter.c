#include <stdio.h>

int main(void) {
  int firstNum, secondNum, thirdNum;

  printf("Enter your three-digit number: ");
  scanf("%1d%1d%1d", &firstNum, &secondNum, &thirdNum);

  printf("Here's your reversed number: %d%d%d\n", thirdNum, secondNum, firstNum);

  return 0;
}
