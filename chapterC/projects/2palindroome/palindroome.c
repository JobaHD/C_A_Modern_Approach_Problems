#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#define MAX 100

bool palindroomeA(void);

int main(void) {
  printf(palindroomeA() ? "Palindroome" : "Not palindroomme");

  return 0;
}

bool palindroomeA(void) {
  char ch, arr[MAX];
  int i = 0;

  printf("Enter a message: ");
  while ((ch = getchar()) != '\n') {
    arr[i++] = ch;
  }

  int last = i--;
  i = 0;

  // both variables will keep getting closer if they are the same fo a space
  for (;;) {
    if (i == last) {
      return true;
    }

    if (!isalpha(i)) {
      i++;
      continue;
    }

    if (!isalpha(last)) {
      last++;
      continue;
    }

    if (arr[i] == arr[last]) {
      i++;
      last--;
    } else {
      break;
    }
  }

  return false;
}
