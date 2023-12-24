#include <stdio.h>

int main(void) {
  int counter;
  printf("Enter a message: ");
  while (getchar() != '\n') {
    counter++;
  }

  printf("Your message was %d characters long\n", counter);
  return 0;
}
