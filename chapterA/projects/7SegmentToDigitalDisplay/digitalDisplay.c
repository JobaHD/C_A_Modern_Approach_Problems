#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

#define MAX_DIGITS 10

/* external vars */
const bool segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0}, // 0
    {0, 1, 1, 0, 0, 0, 0}, // 1
    {1, 1, 0, 1, 1, 0, 1}, // 2
    {1, 1, 1, 1, 0, 0, 1}, // 3
    {0, 1, 1, 0, 0, 1, 1}, // 4
    {1, 0, 1, 1, 0, 1, 1}, // 5
    {1, 0, 1, 1, 1, 1, 1}, // 6
    {1, 1, 1, 0, 0, 0, 0}, // 7
    {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1},
};

const int encoding[3][3] = {{-1, 0, -1},
                            { 5, 6, 1, },
                            {4, 3, 2}};

/* A digit take up 4 units vertically, 3 units horizontal plus a space so 4
 * units. Which is multiplied by MAX_DIGITS b/c the digits are display
 * horizontally
 * _ 0 _ SPACE _ _ _
 * 5 6 1 SPACE _ _ _
 * 4 3 2 SPACE _ _ _
 */

int digits[4][4 * MAX_DIGITS] = {0};

/* prototypes */
void clearDigitsArr(void);
void processDigits(int digit, int position);
void printDigitsArr(void);

int main(void) {
  char ch;
  int pos = 0;
  clearDigitsArr();

  printf("Enter a number: ");
  while ((ch = getchar()) != '\n') {
    if (isdigit(ch)) {
      processDigits(ch - '0', pos++);
    }
  }

  printDigitsArr();
  return 0;
}

void clearDigitsArr() {
  for (int i = 0; i < 4; i++) {
    for (int k = 0; k < MAX_DIGITS * 4; k++) {
      digits[i][k] = ' ';
    }
  }
}

void printDigitsArr() {
  for (int i = 0; i < 4; i++) {
    for (int k = 0; k < MAX_DIGITS * 4; k++) {
      printf("%c", digits[i][k]);
    }
    printf("\n");
  }
}

void processDigits(int digit, int position) {
  position *= 4;
  char symbol = ' ';
  for (int i = 0; i < 3; i++) {
    for (int k = 0; k < 3; k++) {
      symbol = encoding[i][k] % 3 == 0 ? '_' : '|';
      // printf("Symbol: %c\n", symbol);
      if (i == 0) {
          // if not first or last position place symbol
          // Also must
        digits[i][k + position] = (k % 2 != 0 && segments[digit][0]) ? symbol : ' ';
      } else {
        // printf("Encoding[i][k]: %d\n", encoding[i][k]);
        digits[i][k + position] =
            segments[digit][encoding[i][k]] ? symbol : ' ';
      }
    }
  }
}
