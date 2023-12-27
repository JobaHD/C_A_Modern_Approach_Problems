#include <stdio.h>
/*  Maximum n-values:
 *  short: 7
 *  int: 15
 *  long: 20
 *  long long: 20
 *  float: 34
 *  double: 170
 *  long double: 1754
 */
int main(void) {
    int n;
    long double result = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    printf("Factorial: %Lf", result);

    return 0;
}
