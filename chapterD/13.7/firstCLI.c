#include <stdio.h>

int main(int argc, char **argv) {
    printf("1: %s\n", *argv);
    printf("2: %s\n", *++argv);

  char **p = argv;
  while (*p != NULL) {
    printf("Args: %s\n", *p++);
  }

}
