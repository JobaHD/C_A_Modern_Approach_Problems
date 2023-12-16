#include <stdio.h>

int main(void) {
    int itemNum, m, d, y;
    float itemPrice;

    printf("Enter item number: ");
    scanf("%d", &itemNum);

    printf("Enter unit price: ");
    scanf("%f", &itemPrice);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    printf("Item\t\t Unit\t\t Purchase\n");
    printf("    \t\t Price\t\t Date\n");
    printf("%d\t\t $ %6.2f\t %02d/%02d/%04d\n", itemNum, itemPrice, m, d, y);
    return 0;
}
