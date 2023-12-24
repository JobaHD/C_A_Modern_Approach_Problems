#include <stdio.h>

int main(void) {
  int n, factorial = 1;
  float e = 1.0f;
  printf("Enter a maximum n for approximation of e: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int d = i; d > 0; d--) {
      factorial *= d;
    }
    e += 1.0f / factorial;
    factorial = 1;
  }

  printf("Approximation of e: %.10f\n", e);

  return 0;
}
