#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_line(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n' && ch != EOF) {
    if (isspace(ch) && i == 0) {
    } else if (i < n) {
      str[i++] = ch;
    }
  }
  str[i] = 0;
  return i;
}

int read_line2(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != EOF && !isspace(ch)) {
    if (i < n) {
      str[i++] = ch;
    }
  }
  str[i] = 0;
  return i;
}

int read_line3(char str[], int n) {
  int ch, i = 0;

  do {
    ch = getchar();
    if (i < n) {
      str[i++] = ch;
    }
  } while (ch != EOF && ch != '\n');

  str[i] = 0;
  return i;
}

int read_line4(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n' && ch != EOF && i < n) {
    str[i++] = ch;
  }
  if (i==n) {
      putchar(ch);
  }
  str[i] = 0;
  return i;
}

int main(int argc, char **argv) {
    int n = 10;
    char str[10] = "";

    printf("Enter a string: ");
    //read_line(str, n);
    //read_line2(str, n);
    //read_line3(str, n);
    //read_line4(str, n);
    printf("%s", str);


    exit(EXIT_SUCCESS);
    }
