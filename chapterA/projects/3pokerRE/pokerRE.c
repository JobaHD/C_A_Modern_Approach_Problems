#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_CARDS 5
#define RANK 0
#define SUIT 1

/* external vars */
bool straight, flush, four, three;
int pairs; /* can be 0, 1 , or 2 */

/* prototypes */
void readCards(int hand[5][2]);
void analyzeHand(int hand[5][2]);
void printResult(void);

/* main: Calls readCards, analyzeHand, and printResult repeatedly
 */
int main(void) {

    int hand[5][2] = {0};

    for (;;) {
        readCards(hand);
        analyzeHand(hand);
        printResult();
    }
    return 0;
}

/* readCards: read the cards into external vars, checks for bad or duplicate
 * cards.
 */
void readCards(int hand[5][2]) {
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
        case '2':
            rank = 0;
            break;
        case '3':
            rank = 1;
            break;
        case '4':
            rank = 2;
            break;
        case '5':
            rank = 3;
            break;
        case '6':
            rank = 4;
            break;
        case '7':
            rank = 5;
            break;
        case '8':
            rank = 6;
            break;
        case '9':
            rank = 7;
            break;
        case 'T':
            rank = 8;
            break;
        case 'J':
            rank = 9;
            break;
        case 'Q':
            rank = 10;
            break;
        case 'K':
            rank = 11;
            break;
        case 'A':
            rank = 12;
            break;
        default:
            badCard = true;
        }

        suitCh = toupper(getchar());
        switch (suitCh) {
        case 'C':
            suit = 0;
            break;
        case 'D':
            suit = 1;
            break;
        case 'H':
            suit = 2;
            break;
        case 'S':
            suit = 3;
            break;
        default:
            badCard = true;
        }

        while ((ch = getchar()) != '\n') {
            if (ch != ' ') {
                badCard = true;
            }
        }

        /*check if card exists in hand*/
        for (int i = 0; i < cardsRead; i++) {
            if (hand[i][0] == rank && hand[i][1] == suit) {
                printf("Duplicate card; ignored. \n");
                break;
            }
        }

        if (badCard) {
            printf("Bad card; ignored. \n");
        } else {
            hand[cardsRead][0] = rank;
            hand[cardsRead][1] = suit;
            cardsRead++;
        }
    }
}

/* analyzeHand: Determine hand combination and stores the result into
 * external vars.
 */
void analyzeHand(int hand[5][2]) {
    int rankStreak = 0;
    int rank, suit;
    int cards;
    straight = true;
    flush = true;
    four = false;
    three = false;
    pairs = 0;

    /*check for flush*/
    for (cards = 1; cards < NUM_CARDS - 1; cards++) {
        if (hand[0][SUIT] != hand[cards][SUIT]) {
            flush = false;
        }
    }

    /* First sort array by rank */;
    for (int pass = 1; pass < 5; pass++) {
        for (int card = 0; card < 5 - pass; card++) {
            rank = hand[card][RANK];
            suit = hand[card][SUIT];
            if (rank > hand[card + 1][RANK]) {
                hand[card][RANK] = hand[card + 1][RANK];
                hand[card][SUIT] = hand[card + 1][SUIT];
                hand[card + 1][RANK] = rank;
                hand[card + 1][SUIT] = suit;
            }
        }
    }

    /* check for straight */
    rank = hand[0][RANK];
    for (int i = 1; i < NUM_CARDS; i++) {
        rank++;
        if (rank != hand[i][RANK]) {
            straight = false;
        }
    }

    rank = hand[0][RANK];
    /* Checks if rank is repeated across cards, so [8d, 8t] would be pair
     * check for 4-of-a-kind, 3-of-a-kind, and pairs
     */
    for (int i = 0; i < NUM_CARDS; i++) {
        if (numInRank[rank] == 4)
            four = true;
        if (numInRank[rank] == 3)
            three = true;
        if (numInRank[rank] == 2)
            pairs++;
    }
}

/* printResult: Notifies usre of result using external vars set by
 * analyzeHand.
 */
void printResult(void) {
    if (straight && flush)
        printf("Straight flush");
    else if (four)
        printf("Four of a kind");
    else if (three && pairs == 1)
        printf("Full House");
    else if (flush)
        printf("Flush");
    else if (straight)
        printf("Straight");
    else if (pairs == 2)
        printf("Two pairs");
    else if (pairs == 1)
        printf("Pair");
    else
        printf("High Card");

    printf("\n\n");
}
