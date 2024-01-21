#include <stdio.h>
#define LEN 10

int main(void) {
  char arr[LEN];
  int i = 0;

  printf("Enter a message under %d to reverse it: ", LEN);

  while (arr + i < arr + LEN && (*(arr + i++) = getchar()) != '\n') {
  }

  printf("Reversed message: ");
  while (--i + arr >= arr) {
    putchar(*(i + arr));
  }
  printf("\n");

  return 0;
}
