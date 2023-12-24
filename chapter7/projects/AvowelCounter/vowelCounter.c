#include <ctype.h>
#include <stdio.h>

int main(void) {
  int vowelCount;
  char input;

  printf("Enter a sentence: ");

  while ((input = getchar()) != '\n') {
    switch (toupper(input)) {
    case 'A': case 'E': case 'I': case 'O': case 'U':
      vowelCount++;
      break;
    }
  }

  printf("Your sentence has %d vowels\n", vowelCount);

  return 0;
}
