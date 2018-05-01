#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

T_stack* allocstack(int S) {
  T_stack* stack = (T_stack*) malloc(sizeof(T_stack));

  stack->item = (int*) malloc(S * sizeof(int));
  stack->size = S;
  stack->top = -1;

  return stack;
}

int emptystack(T_stack* stack) {
  return (stack->top == -1);
}

int fullstack(T_stack* stack) {
  return (stack->top == (stack->size - 1));
}

void push(T_stack* stack, int D) {
  if(fullstack(stack)) {
    printf("Stack Overflow --impossible-push\n");
  } else {
    stack->item[++stack->top] = D;
  }
}

int pop(T_stack* stack) {
  if(emptystack(stack)) {
    printf("Stack Underflow --impossibe-pop\n");
    freestack(stack);
    exit(-1);
  } else {
    return stack->item[stack->top--];
  }
}

int top(T_stack* stack) {
  if(emptystack(stack)) {
    printf("Empty Stack --impossible-top");
  } else {
    return stack->item[stack->top];
  }
}

void freestack(T_stack* stack) {
  free(stack->item);
  free(stack);
}
