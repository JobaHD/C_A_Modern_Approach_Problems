#include <stdio.h>

int largest(int n, int a[n]);
int average(int n, int a[n]);
int posNumCount(int n, int a[n]);

int main(void) {
  int n = 5;
  int a[5] = {23, -2, -27, 237, 1000};

  printf("Largest number in a: %d\n", largest(n, a));
  printf("Average number in a: %d\n", average(n, a));
  printf("Count of positive numbers in a: %d\n", posNumCount(n, a));

  return 0;
}

int largest(int n, int a[n]) {
  int max = a[n-1];
  while (--n >= 0) {
    if (max < a[n]) {
      max = a[n];
    }
  }
  return max;
}

int average(int n, int a[n]) {
  int sum = a[0];
  int i;
  for (i = 1; i < n; i++) {
    sum += a[i];
  }
  return sum / n;
}

int posNumCount(int n, int a[n]) {
  int count = 0;
  while (--n >= 0) {
    if (a[n] > 0) {
      count++;
    }
  }
  return count;
}
