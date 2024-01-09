#include <stdio.h>

int main(void) {

    return 0;
}

int *findLargest(int a[], int n) {
    int maxI = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > a[maxI]) {
            maxI = i;
        }
    }
    return &a[maxI];
}
