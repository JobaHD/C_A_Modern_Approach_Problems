/* Take time in 24 hour format and covert it to 12 hour format 8*/
#include <stdio.h>

int main(void) {
  int hour24, min;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour24, &min);

  printf("Equivalent 12-hour time: ");
  if (hour24 == 0) {
    printf("%.2d:%.2d AM\n", 12, min);
  } else if (hour24 < 12) {
    printf("%.2d:%.2d AM\n", hour24, min);
  } else if (hour24 == 12) {
    printf("%.2d:%.2d PM\n", 12, min);
  } else {
    printf("%.2d:%.2d AM\n", hour24 - 12, min);
  }

  return 0;
}
