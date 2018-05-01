#ifndef __STDLIST_H__
#define __STDLIST_H__

typedef struct node {
  int data;
  struct node* prev;
  struct node* next;
} T_node;

typedef struct list {
  int size;
  T_node* first;
  T_node* last;
} T_list;

T_list* alloclist();
T_node* allocnode(T_list* list, int D);

T_list* concatlist(T_list* list1, T_list* list2);

int emptylist(T_list* list);

void pushfirst(T_list* list, int D);
void pushlast(T_list* list, int D);
void push(T_list* list, int D, int P);

void pullfirst(T_list* list);
void pulllast(T_list* list);
void pull(T_list* list, int P);

void printlist(T_list* list);

void freelist(T_list* list);

#endif
