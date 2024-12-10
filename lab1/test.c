#include <stdio.h>
#include <stdlib.h>

int main() {
  int seed =1232141;
  srand(seed);
  int n = rand();
  int m = rand();
  int k = rand();
  printf("%d %d %d", n, m, k);
}