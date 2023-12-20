#include <stdio.h>

int main(void) {
  int inputNum, count = 0;
  printf("Enter a non-negative number: ");
  scanf("%d", &inputNum);

  do {
    count++;
    inputNum /= 10;
  } while (inputNum > 0);

  printf("The number has %d digits(s)\n", count);
  return 0;
}
