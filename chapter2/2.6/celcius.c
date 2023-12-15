#include <stdio.h>
#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
    float celcius, far;
    printf("Enter farenheit: ");
    scanf("%f", &far);

    celcius = (far - FREEZING_POINT) * SCALE_FACTOR;
    printf("Celcius: %.2f\n", celcius);

    return 0;
}
