#include <stdio.h>
#define N 10

int main(void) {
  int a[N], *p;

  printf("Enter %d numbers to be reversed: \n", N);

  for (p = a; p < a + N; p++) {
    scanf("%d", p);
  }

  printf("Reversed: ");
  for (--p; p >= a ; p--) {
      printf(" %d", *p);
  }

  printf("\n");


  return 0;
}
