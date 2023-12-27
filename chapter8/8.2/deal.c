#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void) {
  int inHand[NUM_SUITS][NUM_RANKS] = {0};
  int numCards, rank, suit;
  const char rankCode[] = {'2', '3', '4', '5', '6', '7', '8',
                           '9', 't', 'j', 'q', 'k', 'a'};
  const char suitCode[] = {'c', 'd', 'h', 's'};

  srand((unsigned) time(NULL));

  printf("Enter the number of cards to draw: ");
  scanf("%d", &numCards);

  while (numCards > 0) {
      suit = rand() % NUM_SUITS;
      rank = rand() % NUM_RANKS;
      if (!inHand[suit][rank]) {
          inHand[suit][rank] = 1;
          printf(" %c%c", rankCode[rank],suitCode[suit]);
          numCards--;
      }
  }
  printf("\n");

  return 0;
}
