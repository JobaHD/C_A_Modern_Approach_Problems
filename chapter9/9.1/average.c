/* Computes average of three numbers */
#include <stdio.h>

double average(double a, double b) {
  return (a + b) / 2;
}

int main(void) {
    double n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%lf%lf%lf",  &n1,  &n2,  &n3);

    printf("Average of %g and %g: %g\n", n1, n2, average(n1, n2));
    printf("Average of %g and %g: %g\n", n2, n3, average(n2, n3));
    printf("Average of %g and %g: %g\n", n1, n3, average(n1, n3));


    return 0;
}

