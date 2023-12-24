/* Generates calendar given number of days, and start day of the week */
#include <stdio.h>

int main(void) {
  int n;
  int startingDay;

  printf("Enter how many days the month has: ");
  scanf("%d", &n);
  printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &startingDay);

  startingDay = ((startingDay - 1) % 7) + 1;

  int blankCounter = startingDay - 1;
  while (blankCounter > 0) {
        printf("   ");
        blankCounter--;
  }

  int i = 1;
  while (i <= n) {
    printf("%2d ", i);
    if ((i + startingDay - 1) % 7 == 0) {
      printf("\n");
    }
    i++;
  }

  return 0;
}
