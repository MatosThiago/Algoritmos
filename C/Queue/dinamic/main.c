#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main() {

  T_queue* queue = allocqueue();

  push(queue, 1);
  push(queue, 2);
  push(queue, 3);
  push(queue, 4);
  push(queue, 5);

  printqueue(queue);

  pop(queue);

  printqueue(queue);

  freequeue(queue);

  return 0;
}
