#ifndef __STDQUEUE_H__
#define __STDQUEUE_H__

typedef struct node {
  int data;
  struct node* next;
} T_node;

typedef struct queue {
  T_node* first;
  T_node* last;
} T_queue;

T_queue* allocqueue();
T_node* allocnode(int D);

int emptyqueue(T_queue* queue);

void push(T_queue* queue, int D);
void pop(T_queue* queue);
T_node* get(T_queue* queue);

void printqueue(T_queue* queue);

void freequeue(T_queue* queue);

#endif
