#include <stdio.h>

int main(void) {
    printf("\\n: \12\n");
    printf("\\b: \10\n");
    printf("\\r: \15\n");
    printf("\\t: \11\n");

    printf("\\n: \x0a\n");
    printf("\\b: \x08\n");
    printf("\\r: \x0d\n");
    printf("\\t: \x09\n");
    return 0;
}
