#include <stdio.h>

int main(void) {
    int gs1Pre, grpId, pubCode, itemNum, checkDig;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1Pre, &grpId, &pubCode, &itemNum, &checkDig);

    printf("GS1 prefix: %3d\n", gs1Pre);
    printf("Group identifier: %1d\n", grpId);
    printf("Published code: %3d\n", pubCode);
    printf("Item number: %5d\n", itemNum);
    printf("Check digit: %1d\n", checkDig);

    return 0;
}
