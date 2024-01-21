#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#define MAX 100

bool palindroomeA(char arr[], int n);
bool palindroomeP(char arr[], int n);

int main(void) {
  char ch, arr[MAX];
  char *p = arr;

  printf("Enter a message: ");
  while ((ch = getchar()) != '\n' && p < arr + MAX) {
    if (isalpha(ch)) {
      *p++ = tolower(ch);
    }
  }

  printf(palindroomeA(arr, p - arr) ? "Palindroome" : "Not palindroomme");

  return 0;
}

bool palindroomeA(char arr[], int n) {
  int end = n - 1, start = 0;

  while (start < end) {
    if (*(arr + start++) != *(arr + end--)) {
      return false;
    }
  }

  return true;
}

bool palindroomeP(char arr[], int n) {
  char *end = &arr[n - 1], *start = &arr[0];

  while (start < end) {
    if (*start++ != *end--) {
      return false;
    }
  }

  return true;
}
