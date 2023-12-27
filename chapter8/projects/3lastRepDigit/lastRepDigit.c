#include <stdio.h>
#define N 10

int main(void) {
  int digit;
  int duplicates[N] = {0};
  long number;

  printf("Enter a number: ");
  scanf("%ld", &number);

  while (number > 0) {
    while (number > 0) {
      digit = number % 10;
      duplicates[digit]++;
      number /= 10;
    }

    printf("Digits:     ");
    for (int i = 0; i < N; i++) {
      printf("%d   ", i);
    }
    printf("\nOcurrences: ");
    for (int i = 0; i < N; i++) {
      printf("%d   ", duplicates[i]);
      duplicates[i] = 0;
    }

    printf("\n");
    printf("Enter a number: ");
    scanf("%ld", &number);
  }

  return 0;
}
