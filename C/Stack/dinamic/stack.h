#ifndef __STDSTACK_H__
#define __STDSTACK_H__

typedef struct element {
  int data;
  struct element* next;
} T_element;


typedef struct stack {
  T_element* top;
} T_stack;

T_stack* allocstack();
T_element* allocelement(int D);

int emptystack(T_stack* stack);

void push(T_stack* stack, int D);
int pop(T_stack* stack);
int top(T_stack* stack);

void printstack(T_stack* stack);

void freestack(T_stack* stack);

#endif
