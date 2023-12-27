#include <stdio.h>

int main(void) {
    int a[10], i;

    for (i = 0; i <= 10; i++) {
        a[i] = 0;
        printf("Run %d", i);
    }

    return 0;
}
