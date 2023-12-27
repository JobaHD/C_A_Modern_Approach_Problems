#include <stdio.h>
#define N 10
#define true 1
#define false 0
typedef int bool;

int main(void) {
  bool digitSeen[N] = {false};
  int digit;
  bool duplicates[N] = {0};
  long number;

  printf("Enter a number: ");
  scanf("%ld", &number);

  while (number > 0) {
    digit = number % 10;
    if (digitSeen[digit]) {
      duplicates[digit] = true;
    }
    digitSeen[digit] = true;
    number /= 10;
  }

  printf("Repeated digit(s): ");
  for (int i = 0; i < N; i++) {
    if (duplicates[i]) {
      printf("%d ", i);
    }
  }
}
