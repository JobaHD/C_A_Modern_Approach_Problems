#include <stdio.h>
#define N 5

void getMaxAndMin(int arr[], int n, int *max, int *min);

int main(void) {
  int max, min;
  int arr[N] = {0};

  printf("Enter %d numbers: ", N);
  int i = 0;
  while (i < N) {
    scanf(" %d", arr + i++);
  }

  getMaxAndMin(arr, N, &max, &min);

  printf("Max: %d\n", max);
  printf("Max: %d\n", min);

  return 0;
}

void getMaxAndMin(int arr[], int n, int *max, int *min) {
  int *p = arr;
  *max = *min = arr[0];

  while (++p < arr + n) {
    if (*max < *p) {
      *max = *p;
    } else if (*min > *p) {
      *min = *p;
    }
  }
}
