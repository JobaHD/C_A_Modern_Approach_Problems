#include <stdio.h>
#define LIMIT 80

int main(void) {
  char message[LIMIT] = {0};
  int i = 0;
  int shift = 0;

  printf("Enter message to be encrypted: ");
  while ((message[i++] = getchar()) != '\n') {
  }

  printf("Enter shift amount: ");
  scanf("%d", &shift);

  for (int i = 0; message[i] != 0; i++) {
    char ch = message[i];
    if (ch >= 'a' && ch <= 'z') {
      putchar(((ch - 'a') + shift) % 26 + 'a');
    } else if (ch >= 'A' && ch <= 'Z') {
      putchar(((ch - 'A') + shift) % 26 + 'A');
    } else {
      putchar(ch);
    }
  }

  return 0;
}
