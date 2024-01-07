#include <ctype.h>
#include <stdio.h>

#define MAX_DIGITS 10

/* external vars */
const int segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0}, // 0
    {0, 1, 1, 0, 0, 0, 0}, // 1
    {1, 1, 0, 1, 1, 0, 1}, // ...
    {1, 1, 1, 1, 0, 0, 0}, {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 0},
    {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1},
};

/* A digit take up 4 units vertically, 3 units horizontal plus a space so 4
 * units. Which is multiplied by MAX_DIGITS b/c the digits are display
 * horizontallyy _ _ _ SPACE _ _ _ _ _ _ SPACE _ _ _ _ _ _ SPACE _ _ _ _ _ _
 * SPACE _ _ _
 */
int digits[4][4 * MAX_DIGITS] = {0};

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
    int counter = 0;
  printf("Digits: %d\n", digit);
  for (int i = 0; i < 4; i++) {
    for (int k = position * 4; k < position + 4; k++) {
    }
  }
}
