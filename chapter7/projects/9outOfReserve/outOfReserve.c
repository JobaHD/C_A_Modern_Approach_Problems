#include <ctype.h>
#include <stdio.h>

int main(void) {
  char meridian;
  int min, hour;

  printf("Enter the time in 12-hour format: ");
  scanf("%d:%d %c", &hour, &min, &meridian);

  hour = (hour == 12) ? 0 : hour;
  if (toupper(meridian) == 'P') {
      hour += 12;
  }

  printf("Time in 24-hour format: %.2d:%.2d", hour, min);
}
