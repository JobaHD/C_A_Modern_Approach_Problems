#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

void capitalize(char str[], int n) {
  int i = 0;
  while (str[i] != '\0') {
    toupper(str[i++]);
  }

  return;
}

void capitalizePtr(char *str, int n) {
  while (*str != '\0') {
    toupper(*str);
    str++;
  }

  return;
}

int main(int argc, char **argv) {
  if (argc < 2) {
    exit(EXIT_FAILURE);
  }

  char **n = argv;
  while (*++n != NULL) {
    capitalize(*n, 100);
    printf("%s\n", *n);
  }

  exit(EXIT_SUCCESS);
}
