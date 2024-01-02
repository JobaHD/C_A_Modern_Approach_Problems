#include <stdio.h>

int isPrime(int n) {
    int i;
    if (n <= 2) {
        return 0;
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("Prime");
    } else {
        printf("Not prime");
    }

    return 0;
}
