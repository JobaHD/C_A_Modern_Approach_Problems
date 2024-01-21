#include <stdbool.h>
#include <stdio.h>

int array[7][24] = {{12, 34, 5,  23, 7,  8,  45, 2,  19, 10, 30, 14,
                     48, 3,  27, 6,  18, 42, 9,  16, 20, 39, 11, 25},

                    {4,  17, 22, 36, 1,  28, 15, 37, 13, 41, 26, 35,
                     21, 49, 31, 40, 46, 29, 44, 38, 33, 47, 24, 32},

                    {50, 43, 0,  19, 8, 15, 25, 37, 5,  14, 27, 3,
                     21, 12, 48, 30, 9, 41, 20, 10, 33, 7,  16, 44},

                    {6,  29, 18, 38, 24, 1,  46, 22, 34, 13, 31, 40,
                     11, 26, 45, 32, 4,  39, 8,  28, 35, 2,  49, 17},

                    {42, 23, 16, 7,  37, 14, 47, 30, 5,  21, 41, 8,
                     31, 19, 12, 48, 25, 10, 38, 33, 46, 27, 3,  49},

                    {36, 29, 18, 6,  14, 24, 9,  45, 13, 41, 35, 22,
                     48, 32, 11, 37, 19, 5,  20, 46, 10, 27, 40, 2},

                    {1,  8,  33, 49, 15, 28, 37, 22, 14, 41, 26, 48,
                     35, 10, 7,  18, 24, 3,  20, 46, 11, 39, 30, 5}};

void findTemps(int a[7][24], int n);
int *findLargest(int a[], int n);

int main(void) {
  findTemps(array, 7);

  return 0;
}

void findTemps(int a[7][24], int n) {
  int(*p)[24];
  int counter = 0;
  for (p = a; p < a + n; p++) {
     counter++;
    printf("Highest temp for day: %d\n", *findLargest(*p, 24));
  }
}

int *findLargest(int a[], int n) {
  int *largest = a;
  int *p = a;

 while (p < a + n) {
    if (*p++ > *largest) {
      largest = p;
    }
  }

  return largest;
}
