#include <stdio.h>

#define DAYS 30
#define HOURS 24

int main(void) {
  const int segments[10][7] = {
      {1, 1, 1, 1, 1, 1, 0},
      {0, 1, 1, 0, 0, 0, 0},
      {1, 1, 0, 1, 1, 0, 1},
      {1, 1, 1, 1, 0, 0, 0},
      {0, 1, 1, 0, 0, 1, 1},
      {1, 0, 1, 1, 0, 1, 0},
      {1, 0, 1, 1, 1, 1, 1},
      {1, 1, 1, 1, 0, 0, 0},
      {1, 1, 1, 1, 1, 1, 1},
      {1, 1, 1, 1, 0, 1, 1},
  };

  const int shortenedSegments[10][7] = {
      {1, 1, 1, 1, 1, 1},          {[1] = 1, 1},
      {1, 1, [3] = 1, 1, [6] = 1}, {1, 1, 1, 1},
      {[1] = 1, 1, [5] = 1, 1},    {1, [2] = 1, 1, [5] = 1},
      {1, [2] = 1, 1, 1, 1, 1},    {1, 1, 1, 1},
      {1, 1, 1, 1, 1, 1, 1},       {1, 1, 1, 1, [4] = 1, 1},
  };

  double temperatureReadings[DAYS][HOURS];
  float average = temperatureReadings[0][0];

  for (int day = 0; day < DAYS; day++) {
    for (int hour = 1; hour < HOURS; hour++) {
      average = (average + temperatureReadings[day][hour]) / 2;
    }
  }

  char chessboard[8][8] = {
      {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
      {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
      {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
      {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
      {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
      {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
      {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
      {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
  };

  char emptyArray[8][8];

  for (int i = 0; i < 8; i++) {
    for (int j = 0; i < 8; i++) {
      if ((i + j) % 2 == 0) {
        emptyArray[i][j] = 'B';
      } else {
        emptyArray[i][j] = 'R';
      }
    }
  }

  return 0;
}
