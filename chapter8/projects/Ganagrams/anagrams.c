#include <ctype.h>
#include <stdio.h>
#define MAX 26

int main(void) {
  char ch;
  int alphabet[MAX] = {0};

  printf("Enter the first word: ");
  while ((ch = toupper(getchar())) != '\n') {
    if (ch >= 'A' && ch <= 'Z') {
      alphabet[ch - 'A']++;
    }
  }

  printf("Enter the second word: ");
  while ((ch = toupper(getchar())) != '\n') {
    if (ch >= 'A' && ch <= 'Z') {
      alphabet[ch - 'A']--;
    }
  }

  for (int i = 0; i < MAX; i++) {
    if (alphabet[i] != 0) {
      printf("These words are not anagrams\n");
      return 0;
    }
  }
  printf("These words are anagrams\n");

  return 0;
}
