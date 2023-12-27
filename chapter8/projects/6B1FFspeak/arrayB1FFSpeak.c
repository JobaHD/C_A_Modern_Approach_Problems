#include <ctype.h>
#include <stdio.h>
#define MAX_SIZE 100
int main(void) {
  char message[MAX_SIZE];

  printf("Enter your normal message: ");

  char ch;
  int i = 0;
  while ((ch = getchar()) != '\n') {
    message[i++] = ch;
  }

  int j = 0;
  while (message[j]) {
    switch (ch = toupper(message[j])) {
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
    j++;
  }

  printf("!!!!!!!!!!!");

  return 0;
}
