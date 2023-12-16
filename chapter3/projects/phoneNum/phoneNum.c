#include <stdio.h>

int main(void) {
    int firstPart, secondPart, thirdPart;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &firstPart, &secondPart, &thirdPart);

    printf("You entered %d.%d.%d\n", firstPart, secondPart, thirdPart);

    return 0;
}
