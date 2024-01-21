#include <stdbool.h>
#include <stdio.h>
#define N 5

int sumArray(const int a[], int n) {
  int sum;

  sum = 0;
  for (int *p = a; p < a + n; p++) {
    sum += *p;
  }

  return sum;
}

bool search(const int a[], int n, int key) {
  for (int *p = a; p < a + n; p++) {
    if (*p == key) {
      return true;
    }
  }
  return false;
}

double innerProduct(const double *a, const double *b, int n) {
  int product = 0;
  int i = 0;
  while (i < n) {
    product += *(a + i) * *(b + i);
  }

  return product;
}

int *findMiddle(int a[], int n) { return a + n / 2; }

int *findLargest(int a[], int n) {
  int *largest = a;
  int *p = a;

  while (p++ < a + n) {
    if (*p > *largest) {
      p = largest;
    }
  }

  return largest;
}

void findTwoLargest(int a[], int n, int *largest, int *secondLargest) {
  int *p = a;
  *largest = *secondLargest = *a;

  while (p++ < a + n) {
    if (*p > *largest) {
      *secondLargest = *largest;
      *largest = *p;
    } else if (*p > *secondLargest) {
      *secondLargest = *p;
    }
  }
}

void storeZeros(int a[], int n) {
  int *p;

  for (p = a; p < a + n; p++) {
    *p = 0;
  }
}

int main(void) {
  int arr[N] = {0, 1, 2, 3, 4};
  int *p;
  int key = 2;

  printf("Searching array for %d equals %d\n", key, search(arr, N, key));

  key = 7;
  printf("Searching array for %d equals %d\n", key, search(arr, N, key));

  printf("Array: ");
  for (p = arr; p < arr + N; p++) {
    printf(" %d", *p);
  }

  return 0;
}
