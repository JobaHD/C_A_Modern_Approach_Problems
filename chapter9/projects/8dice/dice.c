#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice(void);
bool playGame(void);

int main(void) {
  int wins = 0;
  int losses = 0;
  char play = 'Y';

  srand((unsigned)time(NULL));

  do {
      printf("\n");
    if (playGame()) {
      printf("You Win!\n\n");
      wins++;
    } else {
      printf("You Lost!\n\n");
      losses++;
    }

    printf("Play agane? ");
    scanf(" %c", &play);
  } while (toupper(play) == 'Y');

  printf("Wins: %d  Losses: %d\n", wins, losses);

  return 0;
}

int rollDice(void) { return rand() % 12 + 1; }

bool playGame(void) {
  int roll = rollDice();
  int point;
  roll = rollDice();
  printf("You rolled: %d\n", roll);

  switch (roll) {
  case 7: case 11:
    return true;
  case 2: case 3: case 12:
    return false;
  default:
    point = roll;
    printf("Your point is %d\n", point);
  }

  for (;;) {
    roll = rollDice();
    printf("Your rolled %d\n", roll);

    if (roll == point) {
      return true;
    } else if (roll == 7) {
      return false;
    }
  }
}
