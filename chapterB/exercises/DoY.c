#include <stdio.h>
#define MONTHS 12

void splitDate(int dayOfYear, int year, int *month, int *day);

int main(void) {
    int month, day;

    splitDate(61, 2024, &month, &day);
    printf("Month: %d, Day: %d\n", month, day);


    return 0; }

void splitDate(int dayOfYear, int year, int *month, int *day) {
  int daysInMonth[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
      daysInMonth[1] = 29;
  }

  int i;
  for (i = 0; i < MONTHS; i++) {
      if (dayOfYear <= daysInMonth[i]) {
          break;
      }
      dayOfYear -= daysInMonth[i];
  }

  *day = dayOfYear;
  *month = i + 1;
}
