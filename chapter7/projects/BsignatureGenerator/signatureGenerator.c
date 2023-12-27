#include <stdio.h>

int main(void) {
  char firstInitial, lastNameInput;

  printf("Enter a first and last name: ");
  firstInitial = getchar();
  while (getchar() != ' ') {
  }

  while ((lastNameInput = getchar()) != '\n') {
    putchar(lastNameInput);
  }

  printf(", %c.\n", firstInitial);

  return 0;
}
