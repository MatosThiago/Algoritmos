#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

T_stack* allocstack() {
  T_stack* stack = (T_stack*) malloc(sizeof(T_stack));

  stack->top = NULL;

  return stack;
}

T_element* allocelement(int D) {
  T_element* element = (T_element*) malloc(sizeof(T_element));

  element->data = D;
  element->next = NULL;

  return element;
}

int emptystack(T_stack* stack) {
  return (stack->top == NULL);
}

void push(T_stack* stack, int D) {
  T_element* element = allocelement(D);

  if(emptystack(stack)) {
    stack->top = element;
  } else {
    element->next = stack->top;
    stack->top = element;
  }
}

int pop(T_stack* stack) {
  int aux;

  if(emptystack(stack)) {
    printf("Empty Stack --impossible-pop\n");
  } else {
    T_element* element = stack->top;

    aux = element->data;

    stack->top = element->next;
    free(element);
  }

  return aux;
}

int top(T_stack* stack) {
  int A;

  printf("Top Access");
  A = stack->top->data;

  return A;
}

void printstack(T_stack* stack) {
  if(emptystack(stack)) {
    printf("Empty Stack --impossible-printstack\n");
  } else {
    T_element* now = stack->top;

    int i = 1;

    while(now != NULL) {
      printf("%d. %d\n", i, now->data);

      i++;
      now = now->next;
    }
  }
}

void freestack(T_stack* stack) {
  if(!emptystack(stack)) {
    T_element* now = stack->top;

    while(now != NULL) {
      stack->top = now->next;
      free(now);
      now = stack->top;
    }
  }

  free(stack);
}
