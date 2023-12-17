#include <stdio.h>

int main(void) {
  int fullNum, firstNum, secondNum;

  printf("Enter a two-digit number: ");
  scanf("%d", &fullNum);

  firstNum = fullNum / 10;
  secondNum = fullNum % 10;

  printf("This is your reversed number: %d%d\n", secondNum, firstNum);

  return 0;
}
