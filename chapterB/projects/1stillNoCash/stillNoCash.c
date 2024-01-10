#include <stdio.h>

void payAmount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) {
  int initAmount, twentyAmount, tenAmount, fiveAmount, oneAmount;

  printf("Enter your bill in $$: ");
  scanf("%d", &initAmount);

  payAmount(initAmount, &twentyAmount, &tenAmount, &fiveAmount, &oneAmount);

  printf("$20 bills: %d\n", twentyAmount);
  printf("$10 bills: %d\n", tenAmount);
  printf("$5 bills: %d\n", fiveAmount);
  printf("$1 bills: %d\n", oneAmount);

  return 0;
}

void payAmount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
  *twenties = dollars / 20;
  *tens = (dollars - (*twenties * 20)) / 10;
  *fives = (dollars - ((*twenties * 20) + (*tens * 10))) / 5;
  *ones = (dollars -
               ((*twenties * 20) + (*tens * 10) + (*fives * 5))) /
              1;
}

