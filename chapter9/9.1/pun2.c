/* Prints a bad pun */
#include <stdio.h>

void printPun(void) { printf("To C, or not to C: that is the question.\n"); }

int main(void) {
  for (;;) {
    printPun();
  }
  return 0;
}
