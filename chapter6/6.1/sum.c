#include <stdio.h>

int main(void) {
    int currNum, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter the integers (0 to terminate): ");

    scanf("%d", &currNum);
    while (currNum != 0) {
        sum += currNum;
        scanf("%d", &currNum);
    }

    printf("The sum is: %d\n", sum);
    return 0;
}
