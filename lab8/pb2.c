#include <stdio.h>
#include <stdlib.h>

int main() {
  int *v, cap = 5, n = 0;
  v = (int*)malloc(cap * sizeof(int));
  int doneLoop = 0;
  while (1) {
    while (n<cap-1) {
      scanf("%d", &v[n]);
      if (v[n] == 0) {
        doneLoop = 1;
        break;
      }
      n++;

    }
    if (doneLoop)
      break;
    cap *= 2;
    v = (int*)realloc(v, sizeof(int)*cap);
  }
  for (int i = 0; i<=n; i++) {
    printf("%i ", v[i]);
  }
  free(v);
}