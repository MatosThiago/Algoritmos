#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

T_queue* allocqueue() {
  T_queue* queue = (T_queue*) malloc(sizeof(T_queue));

  queue->first = NULL;
  queue->last = NULL;

  return queue;
}

T_node* allocnode(int D) {
  T_node* node = (T_node*) malloc(sizeof(T_node));

  node->data = D;
  node->next = NULL;

  return node;
}

int emptyqueue(T_queue* queue) {
  return (queue->first == NULL && queue->last == NULL);
}

void push(T_queue* queue, int D) {
  T_node* node = allocnode(D);

  if(!emptyqueue(queue)) {
    node->next = queue->first;
  }

  queue->first = node;
}

void pop(T_queue* queue) {
  T_node* now = queue->first;
  T_node* aux = now;

  if(emptyqueue(queue)) {
    printf("Empty Queue --impossible-pop");
  } else {
    while(now != NULL) {
      aux = now;
      now = now->next;
    }

    queue->last->data = aux->data;
    free(now);
  }
}

T_node* get(T_queue* queue) {
  T_node* node = allocnode(0);

  if(emptyqueue(queue)) {
    node = NULL;

    printf("Empty Queue --impossible-get");
  } else {
    node = queue->last;
  }

  return node;
}

void printqueue(T_queue* queue) {
  if(emptyqueue(queue)) {
    printf("Empty Queue --impossible-printqueue\n");
  } else {
    T_node* now = queue->first;

    printf("NULL");

    while(now != NULL) {
      printf(" <- %d", now->data);

      now = now->next;
    }

    printf("\n");
  }
}

void freequeue(T_queue* queue) {
  T_node* now = queue->first;

  if(!emptyqueue(queue)) {
    while(now != NULL) {
      queue->first = queue->first->next;

      free(now);

      now = queue->first;
    }
  }

  free(queue);
}
