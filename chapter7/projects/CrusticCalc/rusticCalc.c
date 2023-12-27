#include <stdio.h>

int main(void) {
  char input;
  float operand1 = 0, operand2 = 0;

  printf("Enter an expression: ");

  scanf("%f", &operand1);
  while ((input = getchar()) != '\n') {
    scanf("%f", &operand2);

    switch (input) {
    case '+':
      operand1 += operand2;
      break;
    case '-':
      operand1 -= operand2;
      break;
    case '*':
      operand1 *= operand2;
      break;
    case '/':
      operand1 /= operand2;
      break;
    }
  }

  printf("Value of expression: %f", operand1);
  return 0;
}
