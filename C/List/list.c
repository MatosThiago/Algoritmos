#include <stdio.h>
#include <stdlib.h>
#include "list.h"

T_list* alloclist() {
  T_list* list = (T_list*) malloc(sizeof(T_list));

  list->size = 0;
  list->first = NULL;
  list->last = NULL;

  return list;
}

T_node* allocnode(T_list* list, int D) {
  T_node* node = (T_node*) malloc(sizeof(T_node));

  node->data = D;
  node->prev = NULL;
  node->next = NULL;

  return node;
}

T_list* concatlist(T_list* list1, T_list* list2) {
  list1->last->next = list2->first;
  list2->first->prev = list1->last;
  list1->size = list1->size + list2->size;

  free(list2);

  return list1;
}

int emptylist(T_list* list) {
  if(list->first == NULL && list->last == NULL) {
    return 1;
  } else {
    return 0;
  }
}

void pushfirst(T_list* list, int D) {
  T_node* node = allocnode(list, D);

  node->next = list->first;
  list->first = node;

  if(list->last == NULL) {
    list->last = list->first;
  } else {
    node->next->prev = node;
  }
}

void pushlast(T_list* list, int D) {
  T_node* node = allocnode(list, D);

  if(emptylist(list)) {
    list->first = node;
  } else {
    list->last->next = node;
    node->prev = list->last;
  }

  list->last = node;
}

void push(T_list* list, int D, int P) {
  list->size++;

  if(P <= 1) {
    pushfirst(list, D);
  } else {
    T_node* now = list->first;

    int i;

    for(i = 1; i < P && now != NULL; i++) {
      now = now->next;
    }

    if(now == NULL) {
      pushlast(list, D);
    } else {
      T_node* node = allocnode(list, D);

      node->prev = now->prev;
      now->prev->next = node;
      node->next = now;
      now->prev = node;
    }
  }
}

void pullfirst(T_list* list) {
  T_node* now = list->first;
  list->first = list->first->next;
  free(now);
}

void pulllast(T_list* list) {
  T_node* now = list->last;
  list->last = list->last->prev;
  list->last->next = NULL;
  free(now);
}

void pull(T_list* list, int P) {
  list->size--;

  if(emptylist(list)) {
    printf("Empty List --impossible-pull\n");
  } else {
    if(P <= 1) {
      pullfirst(list);
    } else {
      T_node* now = list->first;

      int i;

      for(i = 1; i < P && now != NULL; i++) {
        now = now->next;
      }

      if(now == NULL || now == list->last) {
        pulllast(list);
      } else {
        now->prev->next = now->next;
        now->next->prev = now->prev;
        free(now);
      }
    }
  }
}

void printlist(T_list* list) {
  if(emptylist(list)) {
    printf("Empty List --impossible-printlist\n");
  } else {
    T_node* now = list->first;

    while(now != NULL) {
      printf("%d -> ", now->data);

      now = now->next;
    }

    printf("NULL\n");
  }
}

void freelist(T_list* list) {
  T_node* now = list->first;

  if(!emptylist(list)) {
    while(now != NULL) {
      list->first = list->first->next;
      free(now);
      now = list->first;
    }
  }

  free(list);
}
