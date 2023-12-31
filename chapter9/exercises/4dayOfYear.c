#include <stdio.h>

int dayOfYear(int month, int day, int year) {
  int dayPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  // Account for leap years.
  if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    dayPerMonth[1]++;
  for (int i = 0; i < month - 1; i++) {
    day += dayPerMonth[i];
  }

  return day;
}

int main(void) {
  printf("Day of 12/23/2024: %d\n", dayOfYear(12, 23, 2024));

  return 0;
}
