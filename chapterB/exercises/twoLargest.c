#include <stdio.h>
#define N 9

void getTwoLargest(int a[], int n, int *largest, int *secondLargest);

int main(void) {
    int a[9] = { 23, 28 , 37, 29, 298 , 7, 29, 28, 289};
    int largest, secondLargest;

    getTwoLargest(a, 9, &largest, &secondLargest);

    printf("Largest: %d\n", largest);
    printf("2nd Largest: %d\n", secondLargest);
    return 0;
}

void getTwoLargest(int a[], int n, int *largest, int *secondLargest) {
    *largest = a[0];
    *secondLargest = a[1];

    for (int i = 1; i < n; i++) {
        if (a[i] > *largest) {
            *secondLargest = *largest;
            *largest = a[i];
        } else if (a[i] > *secondLargest) {
            *secondLargest = a[i];
        }
    }
}
