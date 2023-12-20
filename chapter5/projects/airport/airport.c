/* Find closest departure time and output flight */
#include <stdio.h>
int main(void) {
  int inputHour, inputMin, inputTotalMin;

  printf("Enter a 24-hour departure time: ");
  scanf("%d:%d", &inputHour, &inputMin);
  inputTotalMin = inputHour * 60 + inputMin;

  int totalMin1 = 8 * 60;
  int totalMin2 = 9 * 60 + 43;
  int totalMin3 = 11 * 60 + 19;
  int totalMin4 = 12 * 60 + 47;
  int totalMin5 = (2 + 12) * 60;
  int totalMin6 = (3 + 12) * 60 + 45;
  int totalMin7 = (7 + 12) * 60;
  int totalMin8 = (9 + 12) * 60 + 45;

  printf("Closest departure time is ");
  if (inputTotalMin <= totalMin1 + (totalMin2 - totalMin1) / 2) {
    printf("8:00 AM, arriving at 10:16 AM");
  } else if (inputTotalMin <= totalMin2 + (totalMin3 - totalMin2) / 2) {
    printf("9:43 AM, arriving at 11:52 AM");
  } else if (inputTotalMin <= totalMin3 + (totalMin4 - totalMin3) / 2) {
    printf("11:19 AM, arriving at 1:31 AM");
  } else if (inputTotalMin <= totalMin4 + (totalMin5 - totalMin4) / 2) {
    printf("12:47 PM, arriving at 3:00 PM");
  } else if (inputTotalMin <= totalMin5 + (totalMin6 - totalMin5) / 2) {
    printf("2:00 PM, arriving at 4:08 PM");
  } else if (inputTotalMin <= totalMin6 + (totalMin7 - totalMin6) / 2) {
    printf("3:45 PM, arriving at 5:55 PM");
  } else if (inputTotalMin <= totalMin7 + (totalMin8 - totalMin7) / 2) {
    printf("7:00 PM, arriving at 9:20 PM");
  } else {
    printf("9:45 PM, arriving at 11:00 PM");
  }
  printf(".\n");

  return 0;
}
