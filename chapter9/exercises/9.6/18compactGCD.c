#include <stdio.h>

int compactGCD(int m, int n) {
    if (n == 0) {
        return m;
    } else {
        return compactGCD(n, m % n);
    }
}

int main(void) {
    printf("GCD of 12 and 6: %d\n", compactGCD(12, 6));
    return 0;
}
