#include <stdio.h>

int main() {
  int n;
  int v[100][100];
  scanf("%d", &n);
  for (int i = 0; i<n; i++)
    for (int j = 0; j<n; j++) {
      scanf("%d", &v[i][j]);
      if (i+j>=n)
        printf("%d ", v[i][j]);
    }

}