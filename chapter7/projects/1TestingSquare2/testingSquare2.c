/* Prints a table of squares using a for statement */
#include <stdio.h>

int main(void) {
  int limit;

  printf("This program prints a table of squares\n");
  printf("Enter the number of entries of in the table: \n");
  scanf("%d", &limit);

  for (int i = 1; i <= limit; i++) {
    printf("%d\t%d\n", i, i * i);
  }

  return 0;
}
