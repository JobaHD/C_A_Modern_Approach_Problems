#include <stdio.h>
#define SEQUENCE_LENGTH 40

int main(void) {
  int fibSequence[SEQUENCE_LENGTH] = {0, 1};

  for (int i = 2; i < SEQUENCE_LENGTH; i++) {
      fibSequence[i] = fibSequence[i-1] + fibSequence[i-2];
      printf("Sequence (num, val): %d %d\n", i+1, fibSequence[i]);
  }

  return 0;
}
