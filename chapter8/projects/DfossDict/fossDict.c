#include <stdio.h>
#define LENGTH 20

int main(void) {
  char firstInitial;
  char lastNameArr[LENGTH] = {0};
  int i = 0;

  printf("Enter a first and last name: ");
  firstInitial = getchar();
  while (getchar() != ' ') {
  }

  while ((lastNameArr[i++] = getchar()) != '\n') {
  }

  i = 0;
  while (lastNameArr[i] != '\n') {
      putchar(lastNameArr[i]);
      i++;
  }

  printf(", %c.\n", firstInitial);

  return 0;
}
