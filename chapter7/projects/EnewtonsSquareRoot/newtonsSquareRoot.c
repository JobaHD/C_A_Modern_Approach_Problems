#include <math.h>
#include <stdio.h>

int main(void) {
    double x, y;
    double oldY = 0.0;

    printf("Enter a positive number to find the square root of: ");
    scanf("%lf", &x);
    y = x - 0.00001;

    while (fabs(oldY - y) > y * 0.00001) {
        oldY = y;
        y = (y + x/y) / 2;
    }

    printf("Square root: %f", y);

    return 0; }
