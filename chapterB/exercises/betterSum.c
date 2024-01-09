#include <stdio.h>
#define N 5

void avgSum(double a[], int n, double *avg, double *sum);

int main(void) {
    double b[N] = {1, 2, 3, 4, 5};
    double sum, avg;

    avgSum(b, N, &sum, &avg);

    printf("Avg: %f, Sum: %f\n", avg, sum);

    return 0;
}

void avgSum(double a[], int n, double *avg, double *sum) {
    int i;

    *sum = 0.0;
    for (i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}
