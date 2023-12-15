#include <stdio.h>

int main(void) {
    float initAmount,
          tipFactor = 1.05f,
          totalAmount;

    printf("Give me your tips (dollars): ");
    scanf("%f", &initAmount);

    totalAmount = initAmount * tipFactor;
    printf("tip ENLARGED: $%.2f\n", totalAmount);

    return 0;
}
