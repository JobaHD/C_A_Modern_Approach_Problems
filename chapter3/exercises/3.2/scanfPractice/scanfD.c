#include <stdio.h>

int main(void) {
    float x, y;

    scanf("%f,%f", &x, &y);
    printf("%f,%f\n", x, y);

    scanf("%f, %f", &x, &y);
    printf("%f, %f\n", x, y);
    return 0;
}

