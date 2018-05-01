#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {

  T_stack* stack = allocstack(6);

  printf("%d\n", pop(stack));

  freestack(stack);

  return 0;
}
