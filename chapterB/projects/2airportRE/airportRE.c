/* Find closest departure time and output flight */
#include <stdio.h>
#define FLIGHT_NUM 8

/* Contains all flight times in minutes since midnight */
int arrivalTotalTimes[FLIGHT_NUM] = {
    480, 583, 679, 767, 840, 945, 1140, 1305,
};

int departTotalTimes[FLIGHT_NUM] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

void findClosestFlight(int desiredTime, int *departTime, int *arriveTime);

int main(void) {
  int inputHour, inputMin, inputTotalMin;
  int departTime, arriveTime;

  printf("Enter a 24-hour departure time: ");
  scanf("%d:%d", &inputHour, &inputMin);
  inputTotalMin = inputHour * 60 + inputMin;

  findClosestFlight(inputTotalMin, &departTime, &arriveTime);
  printf("Closest arrival time is: %d \n", departTime);
  printf("Closest departure time is: %d \n", arriveTime);

  return 0;
}

void findClosestFlight(int desiredTime, int *departTime, int *arriveTime) {
  for (int i = 0; i < FLIGHT_NUM - 1; i++) {
    //    printf("Calc time: %d, Index: %d\n", arrivalTotalTimes[i] +
    //    (arrivalTotalTimes[i + 1] - arrivalTotalTimes[i]) / 2, i);

    if (desiredTime <=
        arrivalTotalTimes[i] +
            (arrivalTotalTimes[i + 1] - arrivalTotalTimes[i]) / 2) {
      *departTime = arrivalTotalTimes[i];
      *arriveTime = departTotalTimes[i];
    } else if (i == FLIGHT_NUM - 2) {
      *departTime = arrivalTotalTimes[i + 1];
      *arriveTime = departTotalTimes[i + 1];
      break;
    }
  }
}
