#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE] = {0};
int top = 0;

/* prototypes */
void makeEmpty(void);
bool isEmpty(void);
bool isFull(void);
void makeEmpty(void);
void push(int);
int pop(void);
int peek(void);
void stackOverflow(void);
void stackUnderflow(void);
void readChar(void);

int main(void) {
  int printChar = '0';
  int lastOperand;
  char ch;

  printf("Enter a RPN expression: ");
  for (;;) {
    scanf(" %c", &ch);
    if (isdigit(ch)) {
      push((int)(ch - '0'));
    } else {
      switch (ch) {
      case '+':
        push(pop() + pop());
        break;
      case '-':
        lastOperand = pop();
        push(pop() - lastOperand);
        break;
      case '/':
        lastOperand = pop();
        push(pop() / lastOperand);
        break;
      case '*':
        push(pop() * pop());
        break;
      case '=':
        printf("Value of expression: %d\n", pop());
        makeEmpty();
        printf("Enter a RPN Expression: ");
        break;
      default:
        exit(EXIT_SUCCESS);
      }
    }
  }
}

void makeEmpty() { top = 0; }

bool isEmpty() { return top == 0; }

bool isFull() { return top == STACK_SIZE; }

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

void stackOverflow() {
  printf("Expression is too complex");
  exit(EXIT_FAILURE);
}

void stackUnderflow() {
  printf("Not enough operands in expression");
  exit(EXIT_FAILURE);
}
