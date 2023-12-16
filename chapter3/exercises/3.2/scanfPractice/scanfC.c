#include <stdio.h>

int main(void) {
    float x;

    scanf("%f", &x);
    printf("%f\n", x);

    scanf("%f ", &x);
    printf("%f\n", x);
    return 0;
}
