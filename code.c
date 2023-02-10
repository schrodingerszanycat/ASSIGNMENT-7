#include <stdio.h>

int add(int a, int b) {
  return a+b;
}

int sum(int a, int b) {
  return a-b;
}

int mul(int a, int b) {
  return a*b;
}

int div(int a, int b) {
  return a/b;
}

void main() {
  // int n = (add+div-mul) (12,2);
  // printf("%d\n", n);
  // int n = (add-mul+div) (12,2);
  // printf("%d\n", n);

  printf("%d %d", sizeof(double), sizeof(void*));
}
// gcc -s code.c
// function pointerssss.
// learn free() usage
// danian pointer??
// p = NULL
