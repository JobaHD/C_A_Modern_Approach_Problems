#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

/* external variables */
int secretNumber;

/* prototypes */
void initRandNumGen(void);
void chooseNewSecretNum(void);
void readGuesses(void);

int main(void) {
  char command;

  printf("Guess the secret number betweeen 1 and %d.\n\n", MAX_NUMBER);
  initRandNumGen();
  do {
    chooseNewSecretNum();
    printf("A new number has been chosen. \n");
    readGuesses();
    printf("Play Again? (Y/N) ");
    scanf(" %c", &command);
    printf("\n");
  } while (command == 'y' || command == 'Y');
}

/* Initialize random number generator using time of day */
void initRandNumGen(void) { srand((unsigned)time(NULL)); }

/* Randomly selects number between 1 and MAX_NUMBER and stores it in
 * secretNumber */
void chooseNewSecretNum(void) { secretNumber = rand() % MAX_NUMBER + 1; }

/* Repeatedly reads user guesses and gives hints. When guess is corecct prints
 * games stats.
 */
void readGuesses(void) {
  int guess, numGuesses = 0;

  for (;;) {
    numGuesses++;
    printf("Enter a guess: ");
    scanf("%d", &guess);
    if (guess == secretNumber) {
      printf("You won in %d guesses!\n\n", numGuesses);
      return;
    } else if (guess < secretNumber) {
      printf("Too low; try again.\n");
    } else {
      printf("Too high; try again.\n");
    }
  }
}
