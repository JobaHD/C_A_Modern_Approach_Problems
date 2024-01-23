#include <stdio.h>
#define N 5

void getMaxAndMin(int arr[], int n, int *max, int *min);

int main(void) {
  int max, min;
  int arr[N] = {0};

  printf("Enter %d numbers: ", N);
  int i = 0;
  while (i < N) {
    scanf(" %d", arr + i);
  }

  getMaxAndMin(arr, N, &max, &min);

  return 0;
}

void getMaxAndMin(int arr[], int n, int *max, int *min) {
    *max = *min = arr[0];

    n--;
    while (n > 0) {
        if (*max < arr[n]) {
            *max = arr[n];
        } else if (*min > arr[n]) {
            *min = arr[n];
        }
    }
}
