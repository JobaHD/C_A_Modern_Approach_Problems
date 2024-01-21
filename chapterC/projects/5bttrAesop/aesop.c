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

  char *lastCharIndex = p;

  for (; p >= sentence; p--) {
    if (*p == ' ' || p == sentence) {
        // will not omit one space if it's the last char.
        int offset = p == sentence ? 0 : 1;
      for (char *q = p + offset; q < lastCharIndex; q++) {
        putchar(*q);
      }
      //decrease for space or first char in case of last word.
      lastCharIndex = p--;
      putchar(' ');
    }
  }

  printf("\b%c\n", finalChar);
}
