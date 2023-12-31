#include <stdio.h>

int evalPosition(char board[8][8]);

int main(void) { return 0; }

int evalPosition(char board[8][8]) {
  int bScore = 0;
  int wScore = 0;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      switch (board[i][j]) {
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
  }

  return wScore - bScore;
}
