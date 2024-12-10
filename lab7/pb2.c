#include <stdio.h>

void count(int n, int *v, int *zero, int *poz, int *neg) {
  for (int i = 0; i < n; i++)
    if (v[i] == 0)
      (*zero)++;
    else if (v[i] > 0)
      (*poz)++;
    else
      (*neg)++;
}

int main() {
  int n;
  int v[100];
  int zero = 0, poz = 0, neg = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
  count(n, v, &zero, &poz, &neg);
  printf("nule: %d\npozitive: %d\nnegative: %d\n", zero, poz, neg);
}