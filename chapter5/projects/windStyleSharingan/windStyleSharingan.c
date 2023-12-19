/* Tells the corresponding wind description on the beaufort scale based on input in knots */
#include <stdio.h>

int main(void) {
    int speed;

    printf("Enter the wind speed in knots: ");
    scanf("%d", &speed);

    printf("Winds of %d knots are considered ", speed);
    if (speed < 1) {
        printf("Calm");
    } else if (speed < 4) {
        printf("Light air");
    } else if (speed < 28) {
        printf("Breeze");
    } else if (speed < 48) {
        printf("Gale");
    } else if (speed < 64) {
        printf("Storm");
    } else {
        printf("Hurricane");
    }
    printf("\n");

    return 0;
}
