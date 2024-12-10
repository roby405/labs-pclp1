#include <stdio.h>

void transform(int v[], int n, int x) {
  int v2[100];
  int index = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] < x)
      v2[index++] = v[i];
  }
  for (int i = 0; i < n; i++) {
    if (v[i] >= x)
      v2[index++] = v[i];
  }
  for (int i = 0; i < n; i++) {
    v[i] = v2[i];
  }
}

int main() {
  int n, x, v[100];
  scanf("%d", &n);
  scanf("%d", &x);
  for (int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
  transform(v, n, x);
  for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
  return 0;
}