#include <stdio.h>

void pb(int n) {
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}

int main(void) {

    printf("Mystery function with 2: ");
    pb(2);
    printf("\n");

    printf("Mystery function with 5: ");
    pb(5);
    printf("\n");

    printf("Mystery function with 16: ");
    pb(16);
    printf("\n");

    printf("Mystery function with 9: ");
    pb(9);
    printf("\n");

    return 0;
}


