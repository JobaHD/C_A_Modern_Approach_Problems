#include <stdio.h>
#define arrayLength (int)(sizeof(array) / sizeof(array[0]))

int main(void) {
  int array[10];
  printf("Enter %d numbers to reverse: ", arrayLength);

  for (int i = 0; i < arrayLength; i++) {
    scanf("%d", &array[i]);
  }

  printf("Reversed numbers: ");
  for (int i = arrayLength - 1; i >= 0; i--) {
    printf("%d ", array[i]);
  }
  putchar('\n');

  return 0;
}
