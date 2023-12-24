#include <ctype.h>
#include <stdio.h>

int main(void) {
  char letter;
  int pointTotal;

  printf("Enter a word: ");
  letter = getchar();

  while (letter != '\n') {
    switch (toupper(letter)) {
    case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
      pointTotal += 1;
      break;
    case 'D': case 'G':
      pointTotal += 2;
      break;
    case 'B': case 'C': case 'M': case 'P':
      pointTotal += 3;
      break;
    case 'F': case 'H': case 'V': case 'W': case 'Y':
      pointTotal += 4;
      break;
    case 'K':
      pointTotal += 5;
      break;
    case 'J': case 'X':
      pointTotal += 8;
      break;
    case 'Q': case 'Z':
      pointTotal += 10;
      break;
    }

    letter = getchar();
  }

  printf("Scrabble value: %d\n", pointTotal);
    return 0;
  }
