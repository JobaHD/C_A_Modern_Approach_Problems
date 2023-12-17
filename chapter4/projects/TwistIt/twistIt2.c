#include <stdio.h>

int main(void) {
  int fullNum, firstNum, secondNum, thirdNum;

  printf("Enter a three-digit number: ");
  scanf("%d", &fullNum);

  firstNum = fullNum / 100;
  secondNum = (fullNum / 10) % 10;
  thirdNum = fullNum % 10;

  printf("This is your reversed number: %d%d%d\n", thirdNum, secondNum, firstNum);

  return 0;
}
