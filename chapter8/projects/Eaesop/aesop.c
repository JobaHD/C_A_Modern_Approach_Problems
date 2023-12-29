#include <stdio.h>
#define MAX 100

int main(void) {
  char sentence[MAX] = {0};
  char finalChar = 0;
  int i = 0;

  printf("Enter a sentence: ");
  while ((finalChar = getchar()) != '?' && finalChar != '!' &&
         finalChar != '.' && i < MAX) {

    sentence[i++] = finalChar;
  }

  int lastWordIndex = MAX - 1;
  for (int i = MAX - 1; i >= 0; i--) {
    if (sentence[i] == ' ' || i == 0) {
      for (int j = i; j < lastWordIndex; j++) {
        putchar(sentence[j]);
      }
      lastWordIndex = i;
    }
  }

  putchar(finalChar);
}
