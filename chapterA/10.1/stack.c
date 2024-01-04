#include <stdbool.h>
#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE] = {0};
int top = 0;

void makeEmpty(void) {
    top = 0;
}

bool isEmpty(void) {
    return top == 0;
}

bool isFull(void) {
    return top == STACK_SIZE;
}

void push(int i) {
    if (isFull()) {
        stackOverflow();
    } else {
        contents[top++] = i;
    }
}

int pop() {
    if (isEmpty()) {
        stackUnderflow();
    } else {
        return contents[--top];
    }
}

