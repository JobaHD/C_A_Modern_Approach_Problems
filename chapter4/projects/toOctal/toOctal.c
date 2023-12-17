#include <stdio.h>

int main(void) {
  int fullInt;
  int firstDig, secondDig, thirdDig, fourthDig, fifthDig;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &fullInt);

  fifthDig = fullInt % 8;
  fullInt /= 8;
  fourthDig = fullInt % 8;
  fullInt /= 8;
  thirdDig = fullInt % 8;
  fullInt /= 8;
  secondDig = fullInt % 8;
  fullInt /= 8;
  firstDig = fullInt % 8;
  fullInt /= 8;

  printf("In octal, your number is: %d%d%d%d%d\n", firstDig, secondDig, thirdDig,
         fourthDig, fifthDig);

  return 0;
}
