#include <stdio.h>

int main(void) {
  double words = 0.0;
  double letters = 0.0;
  char input;

  printf("Enter a sentence: ");

  while ((input = getchar()) != '.') {
    switch (input) {
    case ' ':
      words++;
      break;
    default:
      letters++;
      break;
    }
  }

  printf("Words: %f\n", words);
  printf("Letters: %f\n", letters);
  printf("Average word length: %.1f", letters / words);

  return 0;
}
