#include <stdio.h>

int main(void) {
  printf("%f\n", 010E2);
  printf("%f\n", 32.1E+5);
  //illegal
  // printf("%d\n", 0790);
  // printf("%d\n", 100_000);
  printf("%f\n", 3.978e-8);


  return 0;
}
