#include <stdio.h>

int fact(int x) {
    int result = x;
    while (--x > 0) {
        result *= x;
    }
    return result;
}

int main(void) {
    printf("Factorial of 5: %d\n", fact(5));

    return 0;
}
