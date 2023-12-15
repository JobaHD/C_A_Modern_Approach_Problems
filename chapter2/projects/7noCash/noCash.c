#include <stdio.h>

int main(void) {
    int initAmount, twentyAmount, tenAmount, fiveAmount, oneAmount;

    printf("Enter your bill in $$: ");
    scanf("%d", &initAmount);

    twentyAmount = initAmount / 20;
    tenAmount = (initAmount - (twentyAmount * 20)) / 10;
    fiveAmount = (initAmount - ((twentyAmount * 20) + (tenAmount * 10))) / 5;
    oneAmount = (initAmount - ((twentyAmount * 20) + (tenAmount * 10) + (fiveAmount * 5))) / 1;

    printf("$20 bills: %d\n", twentyAmount);
    printf("$10 bills: %d\n", tenAmount);
    printf("$5 bills: %d\n", fiveAmount);
    printf("$1 bills: %d\n", oneAmount);

    return 0;
}
