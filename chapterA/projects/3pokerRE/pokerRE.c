#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_CARDS 5
#define RANK 0
#define SUIT 1

/* external vars */
bool straight, flush, four, three;
int pairs = 0; /* can be 0, 1 , or 2 */

/* prototypes */
void readCards(int hand[5][2]);
void analyzeHand(int hand[5][2]);
void printResult(void);
void dumpHand(int hand[5][2]);
int getRankNum(char rankCh);
int getSuitNum(char suitCh);

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

/* readCards: read the cards into hand , checks for bad or duplicate
 * cards.
 */
void readCards(int hand[5][2]) {
    char ch, rankCh, suitCh;
    int rank, suit;
    bool badCard;
    bool dupCard;
    int cardsRead = 0;

    while (cardsRead < NUM_CARDS) {
        badCard = false;
        dupCard = false;

        printf("Enter a card: ");

        rankCh = toupper(getchar());
        if ((rank = getRankNum(rankCh)) == -1) {
            badCard = true;
        }

        suitCh = toupper(getchar());
        if ((suit = getSuitNum(suitCh)) == -1) {
            badCard = true;
        }

        while ((ch = getchar()) != '\n') {
            if (ch != ' ') {
                badCard = true;
            }
        }

        /*check if card exists in hand*/
        for (int i = 0; i < cardsRead; i++) {
            if (hand[i][RANK] == rank && hand[i][SUIT] == suit) {
                dupCard = true;
                break;
            }
        }

        if (badCard) {
            printf("Bad card; ignored. \n");
        } else if (dupCard) {
            printf("Duplicate card; ignored. \n");
        } else {
            hand[cardsRead][RANK] = rank;
            hand[cardsRead][SUIT] = suit;
            cardsRead++;
        }
    }
}

/* analyzeHand: Determine hand combination and stores the result into
 * external vars.
 */
void analyzeHand(int hand[5][2]) {
    int rank, suit, runs;
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

    int i = 0;
    while (i < NUM_CARDS) {
        runs = 0;
        int rank = hand[i][RANK];
        while (i < NUM_CARDS && rank == hand[i][RANK]) {
            runs++;
            i++;
        }
            switch (runs) {
                case 2: pairs++; break;
                case 3: three = true; break;
                case 4: four = true; break;
            }
        }
}

/* printResult: Notifies user of result using external vars set by
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

// for debugging, prints all contents of hand
void dumpHand(int hand[5][2]) {
    for (int i = 0; i < 5; i++) {
        for( int k = 0; k < 2; k++) {
            printf("%d", hand[i][k]);
        }
        printf("\n");
    }
}

int getRankNum(char rankCh) {
    int rank = -1;
    switch (rankCh) {
        case '0': exit(EXIT_SUCCESS);
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
    }
    return rank;

}

int getSuitNum(char suitCh) {
    int suit = -1;
    switch (suitCh) {
        case 'C': suit = 0; break;
        case 'D': suit = 1; break;
        case 'H': suit = 2; break;
        case 'S': suit = 3; break;
    }
    return suit;
}
