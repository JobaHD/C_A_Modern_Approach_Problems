#include <ctype.h>
#include <stdio.h>

int main(void) {
  printf("Enter a message: ");

  char ch = toupper(getchar());
  printf("Translated message: ");
  while (ch != '\n') {
    switch (ch) {
    case 'A':
      putchar('4');
      break;
    case 'B':
      putchar('8');
      break;
    case 'E':
      putchar('3');
      break;
    case 'I':
      putchar('1');
      break;
    case 'O':
      putchar('0');
      break;
    case 'S':
      putchar('5');
      break;
    default:
      putchar(ch);
      break;
    }
    ch = toupper(getchar());
  }

  printf("!!!!!!!!!!!!!\n");

  return 0;
}
