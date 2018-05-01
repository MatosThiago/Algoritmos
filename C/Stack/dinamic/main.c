#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {

  T_stack* stack = allocstack();

  push(stack, 3);
  push(stack, 5);
  push(stack, 7);

  pop(stack);
  pop(stack);

  printstack(stack);

  freestack(stack);
}
