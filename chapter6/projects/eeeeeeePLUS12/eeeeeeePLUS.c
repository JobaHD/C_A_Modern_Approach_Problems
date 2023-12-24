/* Approximates e while the inverseFactorial is less than the input number */
#include <stdio.h>

int main(void) {
  float e = 1.0f, factorial = 1.0f, n;
  printf("Enter the backwards 3 for approximation of e: ");
  scanf("%f", &n);

  float inverseFactorial = 1.0f / factorial;
  for (int i = 1; inverseFactorial > n; i++) {
    // reset factorial at start to check for condition at end of loop
    inverseFactorial = 1.0f;
    for (int d = i; d > 0; d--) {
      // multiplies denominator to find inverse factorial
      inverseFactorial /= d;
    }
    e += inverseFactorial;
  }

  printf("Approximation of e: %.10f\n", e);

  return 0;
}
