#include <stdio.h>

double innerProduct(double a[], double b[], int n);

int main(void) {
    double a[5] = { 10, 23, 237, 273, 92 };
    double b[5] = { -2, 28, 2983, 271, 29};
    int n = 5;

    printf("Inner product of a and b: %.2f", innerProduct(a, b, n));

    return 0;
}

double innerProduct(double a[], double b[], int n) {
    int sum = 0;
    while (--n >= 0) {
        sum += (a[n] * b[n]);
    }
    return sum;
}
