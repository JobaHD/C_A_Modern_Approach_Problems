#include <stdio.h>

int main(void) {
  int input;
  printf("Enter a number to reverse its digits: ");
  scanf("%d", &input);

  printf("The reversed number: ");
  do {
    printf("%d", input % 10);
    input /= 10;
  } while (input > 0);
  printf(".\n");

  return 0;
}
