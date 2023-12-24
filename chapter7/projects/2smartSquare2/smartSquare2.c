/* Prints a table of squares, stopping every 24 instances to ask for user input */
#include <stdio.h>

int main(void) {
  int limit;

  printf("This program prints a table of squares\n");
  printf("Enter the number of entries of in the table: \n");
  scanf("%d", &limit);

  getchar();
  for (int i = 1; i <= limit; i++) {
    printf("%d\t%d\n", i, i * i);
    if (i % 24 == 0) {
        printf("Press Enter to continue... ");
        getchar();
    }
  }

  return 0;
}
