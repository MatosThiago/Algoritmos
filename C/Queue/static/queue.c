#include <stdio.h>
#include <stdlib.h>

#define N 1000

int F, L;
int Q[N];

void allocqueue() {
  F = 0;
  L = -1;
}

int emptyqueue() {
  return (F > L);
}

int fullqueue() {
  return (L >= (N - 1));
}

int push(int D) {
  if(fullqueue()) {
    return 0;
  } else {
    L++;
    Q[L] = D;
    return 1;
  }
}

int pop() {
  if(emptyqueue()) {
    return 0;
  } else {
    return Q[F++];
  }
}

int get() {
  if(emptyqueue()) {
    return 0;
  } else {
    return Q[F];
  }
}

int size() {
  return ((L - F) + 1);
}

int main() {

  allocqueue();

  push(7);
  push(9);
  push(11);

  printf("%d\n", pop());
  printf("%d\n", pop());
  printf("%d\n", pop());

  return 0;
}
