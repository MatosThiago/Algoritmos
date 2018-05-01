#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {

  T_list* list1 = alloclist();
  T_list* list2 = alloclist();

  push(list1, 1, 1);
  push(list1, 2, 2);
  push(list1, 3, 3);
  push(list1, 4, 4);
  push(list1, 5, 5);
  push(list1, 6, 6);

  pull(list1, 3);
  pull(list1, -10);
  pull(list1, 20);

  printlist(list1);

  push(list2, 8, 1);
  push(list2, 9, 2);
  push(list2, 10, 3);
  push(list2, 11, 4);
  push(list2, 12, 5);
  push(list2, 13, 6);

  pull(list2, 6);
  pull(list2, 3);
  pull(list2, 1);

  printlist(list2);

  list1 = concatlist(list1, list2);

  printlist(list1);

  printf("\nSize of List: %d\n", list1->size);

  freelist(list1);

  return 0;
}
