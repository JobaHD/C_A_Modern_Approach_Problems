#include <stdbool.h>
#include <stdlib.h>
#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE] = {0};
int *topPtr = contents;

int stackOverflow();
int stackUnderflow();
void makeEmpty();
bool isEmpty(void);
bool isFull(void);
void push(int i);
int pop();

void makeEmpty(void) {
    topPtr = contents;
}

bool isEmpty(void) {
    return topPtr == contents;
}

bool isFull(void) {
    return topPtr == &contents[STACK_SIZE];
}

void push(int i) {
    if (isFull()) {
        stackOverflow();
    } else {
        *topPtr++ = i;
    }
}

int pop() {
    if (isEmpty()) {
        stackUnderflow();
        return -1;
    } else {
        return *--topPtr;
    }
}

int stackOverflow() {
    exit(EXIT_FAILURE);
}

int stackUnderflow() {
    exit(EXIT_FAILURE);
}
