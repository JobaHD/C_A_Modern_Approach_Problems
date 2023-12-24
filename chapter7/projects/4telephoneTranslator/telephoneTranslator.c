#include <stdio.h>

int main(void) {
    char input;

    printf("Enter a phone number: ");

    input = getchar();
    while (input != '\n') {
        if (input >= 'A' && input <= 'C') {
            putchar('2');
        } else if (input >= 'D' && input <= 'F') {
            putchar('3');
        } else if (input >= 'G' && input <= 'I') {
            putchar('4');
        } else if (input >= 'J' && input <= 'L') {
            putchar('5');
        } else if (input >= 'M' && input <= 'O') {
            putchar('6');
        } else if (input >= 'P' && input <= 'S') {
            putchar('7');
        } else if (input >= 'T' && input <= 'V') {
            putchar('8');
        } else if (input >= 'W' && input <= 'Y') {
            putchar('9');
        } else {
            putchar(input);
        }
        input = getchar();
    }

    putchar('\n');

    return 0;
}
