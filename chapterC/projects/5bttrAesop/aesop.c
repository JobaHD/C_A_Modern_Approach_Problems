#include <stdio.h>
#define MAX 100

int main(void) {
  char sentence[MAX] = {0};
  char finalChar = 0;
  char *p = sentence;

  printf("Enter a sentence: ");
  while ((finalChar = getchar()) != '?' && finalChar != '!' &&
         finalChar != '.' && p < sentence + MAX) {
    *p++ = finalChar;
  }

  // add space after last letter, for helping the loop later break up words
  //*p = ' ';

  char *lastCharIndex = p;

  for (; p >= sentence; p--) {
    if (*p == ' ' || p == sentence) {
      for (char *q = p; q < lastCharIndex; q++) {
        putchar(*q);
      }
      lastCharIndex = p;
      putchar(*p--);
    }
  }

  putchar(finalChar);
}
