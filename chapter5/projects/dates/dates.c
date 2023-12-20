#include <stdio.h>

int main(void) {
  int day1, month1, year1, totalDays1, day2, month2, year2, totalDays2;

  printf("Enter the first date (mm/dd/yy): ");
  scanf("%2d/%2d/%2d", &month1, &day1, &year1);
  printf("Enter the second date (mm/dd/yy): ");
  scanf("%2d/%2d/%2d", &month2, &day2, &year2);

  totalDays1 = day1 + (month1 * 30) + (year1 * 365);
  totalDays2 = day2 + (month2 * 30) + (year2 * 365);

  totalDays1 < totalDays2 ? printf("%d/%d/%.2d", month1, day1, year1)
                          : printf("%d/%d/%.2d", month2, day2, year2);
  printf(" is earlier than ");
  totalDays1 < totalDays2 ? printf("%d/%d/%.2d\n", month2, day2, year2)
                          : printf("%d/%d/%.2d\n", month1, day1, year1);

  return 0;
}
