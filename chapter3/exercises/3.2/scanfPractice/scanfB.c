#include <stdio.h>

int main(void) {
    int i, u, j;

    scanf("%d-%d-%d", &i, &u, &j);
    printf("%d-%d-%d\n", i, u, j);

    scanf("%d -%d -%d", &i, &u, &j);
    printf("%d-%d-%d\n", i, u, j);
    return 0;
}
