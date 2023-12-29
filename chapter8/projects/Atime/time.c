/* Find closest departure time and output flight */
#include <stdio.h>
#define LENGTH 8

int main(void) {
  int inputHour, inputMin, inputTotalMin;
  int departures[LENGTH] = {
      8 * 60,
      9 * 60 + 43,
      11 * 60 + 19,
      12 * 60 + 47,
      (2 + 12) * 60,
      (3 + 12) * 60 + 45,
      (7 + 12) * 60,
      (9 + 12) * 60 + 45,
  };

  int arrivals[LENGTH] = {
      10 * 60 + 16,
      11 * 60 + 52,
      (12 + 1) * 60 + 31,
      (12 + 3) * 60,
      (12 + 4) * 60 + 8,
      (12 + 5) * 60 + 55,
      (12 + 9) * 60 + 20,
      (12 + 11) * 60,
  };

  printf("Enter a 24-hour departure time: ");
  scanf("%d:%d", &inputHour, &inputMin);
  inputTotalMin = inputHour * 60 + inputMin;

  // will break with 9
  int i = 0;
  while (i < LENGTH-1) {
    if (inputTotalMin <=
        departures[i] + (departures[i + 1] - departures[i]) / 2) {
      break;
    } else {
      i++;
    }
  }

  printf("Index: %d\n", i);

  int departureMin = departures[i] % 60;
  char departureMeridian = departures[i] / 60 >= 12 ? 'P' : 'A';
  int departureHour12 = departures[i] / 60 % 12 == 0 ? 12 : departures[i] / 60 % 12;

  //bug in the making, watch out for times with 0 hours.
  int arrivalMin = arrivals[i] % 60;
  char arrivalMeridian = arrivals[i] / 60 >= 12 ? 'P' : 'A';
  int arrivalHour12 = arrivals[i] / 60 % 12 == 0 ? 12 : arrivals[i] / 60 % 12;

  printf("%.2d:%.2d %cM, arriving at %.2d:%.2d %cM", departureHour12,
         departureMin, departureMeridian, arrivalHour12, arrivalMin,
         arrivalMeridian);

  return 0;
}
