#include <stdio.h>

int main(void) {
    typedef char Int8;
    typedef short Int16;
    typedef int Int32;

    char c;
    short s;
    int i;

    Int8 smallest;
    Int16 medium;
    Int32 largest;


    printf("Char: %lu\n", sizeof(c));
    printf("Short: %lu\n", sizeof(s));
    printf("Int: %lu\n", sizeof(i));

    printf("Smallest: %lu\n", sizeof(smallest));
    printf("Medium: %lu\n", sizeof(medium));
    printf("Largest: %lu\n", sizeof(largest));
    return 0;
}
