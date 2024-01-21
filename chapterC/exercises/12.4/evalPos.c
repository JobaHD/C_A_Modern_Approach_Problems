#include <stdio.h>

int evalPosition(char board[8][8]);

int main(void) { return 0; }

int evalPosition(char board[8][8]) {
  int bScore = 0;
  int wScore = 0;

  for (char *p = board[0]; p < board[0] + 64; p++) {
    switch (*p) {
    case 'Q': wScore += 9; break;
    case 'R': wScore += 5; break;
    case 'B': case 'N': wScore += 3; break;
    case 'P': wScore += 1; break;
    case 'q': bScore += 9; break;
    case 'r': bScore += 5; break;
    case 'b': case 'n': bScore += 3; break;
    case 'p': bScore += 1; break;
    }
  }

  return wScore - bScore;
}
