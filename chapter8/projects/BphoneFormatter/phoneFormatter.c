#include <stdio.h>
#define LENGTH 15

int main(void) {
  char inputArr[LENGTH] = {0};

  printf("Enter a phone number: ");

  int i = 0;
  while ((inputArr[i++] = getchar()) != '\n') {
  }

  for (int j = 0; j < LENGTH; j++) {
    char currChar = inputArr[j];
    if (currChar >= 'A' && currChar <= 'C') {
      putchar('2');
    } else if (currChar >= 'D' && currChar <= 'F') {
      putchar('3');
    } else if (currChar >= 'G' && currChar <= 'I') {
      putchar('4');
    } else if (currChar >= 'J' && currChar <= 'L') {
      putchar('5');
    } else if (currChar >= 'M' && currChar <= 'O') {
      putchar('6');
    } else if (currChar >= 'P' && currChar <= 'S') {
      putchar('7');
    } else if (currChar >= 'T' && currChar <= 'V') {
      putchar('8');
    } else if (currChar >= 'W' && currChar <= 'Y') {
      putchar('9');
    } else {
      putchar(currChar);
    }
  }
  putchar('\n');

  return 0;
}
