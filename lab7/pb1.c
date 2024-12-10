#include <stdio.h>

void swap(int *pa, int *pb) {
  int auxil = *pa;
  *pa = *pb;
  *pb = auxil;
}

int main() {
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);
  swap(&a, &b);
  printf("%d %d", a, b);
}