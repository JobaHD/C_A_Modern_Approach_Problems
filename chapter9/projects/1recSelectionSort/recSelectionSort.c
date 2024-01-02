#include <stdio.h>
#define SIZE 5

void selectionSort(int n, int a[n]);

int main(void) {
  int i = 0;
  int a[SIZE];

  printf("Enter a set of integers to sort: ");
  while (i < SIZE) {
    scanf("%d", &a[i]);
    i++;
  }

  selectionSort(SIZE, a);

  printf("These are your sorted numbers: ");
  i = 0;
  while (i < SIZE) {
    printf("%d ", a[i]);
    i++;
  }

  return 0;
}

void selectionSort(int n, int a[n]) {
  if (n == 0) {
    return;
  }

  int maxIndex = 0;
  for (int i = 0; i < n; i++) {
    if (a[maxIndex] < a[i]) {
      maxIndex = i;
    }
  }

  int last = a[n - 1];
  a[n - 1] = a[maxIndex];
  a[maxIndex] = last;

  selectionSort(n - 1, a);
}
