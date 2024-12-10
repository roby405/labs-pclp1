#include <stdio.h>
#include <limits.h>

int main() {
  int v[100][100];
  int n, m;
  int minim = INT_MAX;
  scanf("%d%d", &n, &m);
  for (int i = 0; i<n; i++) {
    int maxim = INT_MIN;
    for (int j = 0; j<m; j++) {
      scanf("%d", &v[i][j]);
      if (v[i][j] > maxim)
        maxim = v[i][j];
    }
    if (maxim<minim)
      minim = maxim;
  }
  printf("%d", minim);
}