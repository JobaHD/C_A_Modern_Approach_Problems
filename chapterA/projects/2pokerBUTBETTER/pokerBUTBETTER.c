#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external vars */
bool straight, flush, four, three;
int pairs; /* can be 0, 1 , or 2 */

/* prototypes */
void readCards(int numInRank[], int numInSuit[]);
void analyzeHand(int numInRank[], int numInSuit[]);
void printResult(void);

/* main: Calls readCards, analyzeHand, and printResult repeatedly
 */
int main(void) {
/* numInRank[r] represents the number of cards with rank r*/
int numInRank[NUM_RANKS] = {0};
/* numInSuit[s] represents the number of cards with suit s*/
int numInSuit[NUM_CARDS] = {0};

  for (;;) {
    readCards(numInRank, numInSuit);
    analyzeHand(numInRank, numInSuit);
    printResult();
  }
  return 0;
}

/* readCards: read the cards into external vars, checks for bad or duplicate
 * cards.
 */
void readCards(int numInRank[], int numInSuit[]) {
  bool cardExists[NUM_RANKS][NUM_SUITS] = {0};
  char ch, rankCh, suitCh;
  int rank, suit;
  bool badCard;
  int cardsRead = 0;

  while (cardsRead < NUM_CARDS) {
    badCard = false;

    printf("Enter a card: ");

    rankCh = toupper(getchar());
    switch (rankCh) {
    case '0':
      exit(EXIT_SUCCESS);
    case '2': rank = 0; break;
    case '3': rank = 1; break;
    case '4': rank = 2; break;
    case '5': rank = 3; break;
    case '6': rank = 4; break;
    case '7': rank = 5; break;
    case '8': rank = 6; break;
    case '9': rank = 7; break;
    case 'T': rank = 8; break;
    case 'J': rank = 9; break;
    case 'Q': rank = 10; break;
    case 'K': rank = 11; break;
    case 'A': rank = 12; break;
    default:
      badCard = true;
    }

    suitCh = toupper(getchar());
    switch (suitCh) {
    case 'C': suit = 0; break;
    case 'D': suit = 1; break;
    case 'H': suit = 2; break;
    case 'S': suit = 3; break;
    default:
      badCard = true;
    }

    while ((ch = getchar()) != '\n') {
      if (ch != ' ') {
        badCard = true;
      }
    }

    if (badCard) {
      printf("Bad card; ignored. \n");
    } else if (cardExists[rank][suit]) {
      printf("Duplicate card; ignored. \n");
    } else {
      numInRank[rank]++;
      numInSuit[suit]++;
      cardExists[rank][suit] = true;
      cardsRead++;
    }
  }
}

/* analyzeHand: Determine hand combination and stores the result into
 * external vars.
 */
void analyzeHand(int numInRank[], int numInSuit[]) {
  int numConsec = 0;
  int rank, suit;
  straight = false;
  flush = false;
  four = false;
  three = false;
  pairs = 0;

  /*check for flush*/
  for (suit = 0; suit < NUM_SUITS; suit++) {
    if (numInSuit[suit] == NUM_CARDS) {
      flush = true;
    }
  }

  /* check for straight */
  rank = 0;
  while (numInRank[rank] == 0)
    rank++;
  for (; rank < NUM_RANKS && numInRank[rank] > 0; rank++)
    numConsec++;
  if (numConsec == NUM_CARDS) {
    straight = true;
    return;
  }

  /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
  for (rank = 0; rank < NUM_RANKS; rank++) {
    if (numInRank[rank] == 4) four = true;
    if (numInRank[rank] == 3) three = true;
    if (numInRank[rank] == 2) pairs++;
  }
}

/* printResult: Notifies usre of result using external vars set by
 * analyzeHand.
 */
void printResult(void) {
  if (straight && flush) printf("Straight flush");
  else if (four) printf("Four of a kind");
  else if (three && pairs == 1) printf("Full House");
  else if (flush) printf("Flush");
  else if (straight) printf("Straight");
  else if (pairs == 2) printf("Two pairs");
  else if (pairs == 1) printf("Pair");
  else printf("High Card");

  printf("\n\n");
}
