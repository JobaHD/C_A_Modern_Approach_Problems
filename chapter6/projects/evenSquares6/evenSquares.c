#include <stdio.h>

int main(void) {
  int n;

  printf("Enter a maximum for even bases: ");
  scanf("%d", &n);

  int square;
  for (int i = 2; (square = i * i) <= n; i += 2) {
    printf("%d\n", square);
  }


  return 0;
}
