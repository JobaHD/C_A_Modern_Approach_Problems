#include <stdio.h>

int main(void) {
  int inputDay, inputMonth, inputYear, inputTotalDays, earliestDay,
      earliestMonth, earliestYear, earliestTotalDays;

  printf("Enter the first date (mm/dd/yy): ");
  scanf("%2d/%2d/%2d", &inputMonth, &inputDay, &inputYear);
  inputTotalDays = inputDay + (inputMonth * 30) + (inputYear * 365);
  earliestTotalDays = inputTotalDays;
  earliestDay = inputDay;
  earliestMonth = inputMonth;
  earliestYear = inputYear;

  while (1) {
    printf("Enter the first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &inputMonth, &inputDay, &inputYear);
    inputTotalDays = inputDay + (inputMonth * 30) + (inputYear * 365);

    if (inputTotalDays == 0) {
      break;
    }

    if (inputTotalDays < earliestTotalDays) {
      earliestTotalDays = inputTotalDays;
      earliestDay = inputDay;
      earliestMonth = inputMonth;
      earliestYear = inputYear;
    }
  }

  printf("%d/%d/%.2d is the earliest date", earliestMonth, earliestDay,
         earliestYear);

  return 0;
}
