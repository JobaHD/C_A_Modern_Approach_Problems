#include <stdio.h>

void swap(int *p, int *q);

int main(void) {

    return 0;
}

void swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}
