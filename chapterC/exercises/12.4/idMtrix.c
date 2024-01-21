#include <stdio.h>
#define N 5

int main(void) {
  int idMate[N][N] = {{1, 1, 1, 1, 1},
                      {2, 2, 2, 2, 2},
                      {3, 3, 3, 3, 3},
                      {4, 4, 4, 4, 4},
                      {5, 5, 5, 5, 5}};
  int *p = idMate[0];
  int zeroSpaces = 0;

  for (p = idMate[0]; p < idMate[0] + N * N; p++) {
    if (zeroSpaces == 0) {
      *p = 1;
      zeroSpaces = N;
    } else {
      *p = 0;
      zeroSpaces--;
    }
  }

  printf("After: \n");
  for (p = idMate[0]; p < idMate[0] + (N * N); p++) {
    if ((p - idMate[0]) % 5 == 0) {
      printf("\n");
    }
    printf(" %d", *p);
  }
  printf("\n");
  return 0;
}
