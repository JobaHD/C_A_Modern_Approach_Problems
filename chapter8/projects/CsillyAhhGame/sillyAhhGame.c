#include <ctype.h>
#include <stdio.h>
#define LENGTH 26

int main(void) {
  char letter;
  int pointTotal;
  int pointsArr[LENGTH] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                           1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

  printf("Enter a word: ");

  while ((letter = getchar()) != '\n') {
      pointTotal += pointsArr[toupper(letter) - 'A'];
  }

  printf("Scrabble value: %d\n", pointTotal);
  return 0;
}
