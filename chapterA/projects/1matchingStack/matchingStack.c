#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE] = {0};
int top = 0;

/* Prototypes */
void makeEmpty(void);
bool isEmpty(void);
bool isFull(void);
void push(char i);
char pop();
int stackOverflow(void);
int stackUnderflow(void);

int main(void) {
  char ch;
  bool goodNest = true;

  printf("Enter parenthese and/or braces: ");
  while ((ch = getchar()) != '\n') {
    switch (ch) {
    case '(': case '{':
      push(ch);
      break;
    case ')':
      if (pop() != '('){
          goodNest = false;
      }
      break;
    case '}':
      if (pop() != '{'){
          goodNest = false;
      }
      break;
    }
  }

  if (!isEmpty() || !goodNest) {
    printf("Parentheses/braces are not nested properly\n");
  } else {
    printf("Parentheses/braces are nested properly\n");
  }

  return 0;
}

void makeEmpty(void) { top = 0; }

bool isEmpty(void) { return top == 0; }

bool isFull(void) { return top == STACK_SIZE; }

void push(char i) {
  if (isFull()) {
    stackOverflow();
  } else {
    contents[top++] = i;
  }
}

char pop() {
  if (isEmpty()) {
    stackUnderflow();
  } else {
    return contents[--top];
  }
  return '0';
}

int stackOverflow(void) {
  printf("Stack Overflow");
  exit(EXIT_FAILURE);
}

int stackUnderflow(void) {
  printf("Stack Underflow");
  exit(EXIT_FAILURE);
}
