#ifndef __STDSTACK_H__
#define __STDSTACK_H__

typedef struct stack {
  int top;
  int size;
  int* item;
} T_stack;

T_stack* allocstack(int S);

int emptystack(T_stack* stack);
int fullstack(T_stack* stack);

void push(T_stack* stack, int D);
int pop(T_stack* stack);
int top(T_stack* stack);

void freestack(T_stack* stack);

#endif
