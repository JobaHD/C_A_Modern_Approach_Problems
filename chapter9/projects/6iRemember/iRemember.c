#include <stdio.h>
int polyCalc(int x) {
  return ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
}

int main(void) {
    int x;

    printf("Enter an x to calculate the polynomial that I don't wanna write down: ");
    scanf("%d", &x);
    printf("The result is: %d", polyCalc(x));

    return 0;
}

