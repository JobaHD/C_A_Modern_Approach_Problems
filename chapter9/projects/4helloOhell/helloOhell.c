#include <ctype.h>
#include <stdio.h>
#define MAX 26

void readWord(int counts[MAX]);
int equalArr(int counts1[MAX], int counts2[MAX]);

int main(void) {
  int alphabet1[MAX] = {0};
  int alphabet2[MAX] = {0};

  printf("Enter the first word: ");
  readWord(alphabet1);

  printf("Enter the second word: ");
  readWord(alphabet2);

  if (equalArr(alphabet1, alphabet2)) {
    printf("These words are anagrams\n");
  } else {
    printf("These words are not anagrams\n");
  }

  return 0;
}

void readWord(int counts[MAX]) {
  int ch;
  while ((ch = toupper(getchar())) != '\n') {
    if (ch >= 'A' && ch <= 'Z') {
      counts[ch - 'A']++;
    }
  }
}

int equalArr(int counts1[MAX], int counts2[MAX]) {
  for (int i = 0; i < MAX; i++) {
    if (counts1[i] != counts2[i]) {
      return 0;
    }
  }
  return 1;
}
