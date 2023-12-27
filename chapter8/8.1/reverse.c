#include <stdio.h>
#define N 10

int main(void) {
  int array[N];
  printf("Enter %d numbers to reverse: ", N);

  for (int i = 0; i < N; i++) {
    scanf("%d", &array[i]);
  }

  printf("Reversed numbers: ");
  for (int i = N - 1; i >= 0; i--) {
    printf("%d ", array[i]);
  }
  putchar('\n');

  return 0;
}
