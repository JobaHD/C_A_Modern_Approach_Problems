#include <stdio.h>

int main(void) {
    int entries;

    printf("This program prints a table of squares\n");
    printf("Enter the number of entries in table: ");
    scanf("%d", &entries);

    int i = 1;
    while (i <= entries) {
        printf("%10d%10d\n", i, i*i);
        i++;
    }

    return 0;
}
