#include <stdio.h>

int main(void) {
  int i, n;

  printf("How many numbers do you want to reverse? ");
  scanf("%d", &n);

  int array[n];

  printf("Enter the numbers to reverse: ");

  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  for (i = n - 1; i >= 0; i--) {
    printf("%d ", array[i]);
  }

  return 0;
}
