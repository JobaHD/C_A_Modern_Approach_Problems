#include <stdio.h>
#define LEN 10

int main(void) {
  char arr[LEN];
  char *p = arr;

  printf("Enter a message under %d to reverse it: ", LEN);

  while (p < arr + LEN && (*p++ = getchar()) != '\n') {
  }

  printf("Reversed message: ");
  while (--p >= arr) {
    putchar(*p);
  }
  printf("\n");

  return 0;
}
