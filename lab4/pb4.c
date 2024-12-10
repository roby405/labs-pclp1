#include <stdio.h>

int main() {
  int v[100][100], v2[100][100];
  int v3[100][100];
  int n, m;
  scanf("%d%d", &n, &m);
  for (int i = 0; i<n; i++) 
    for (int j = 0; j<m; j++) 
      scanf("%d", &v[i][j]);
  int p, q;
  scanf("%d%d", &p, &q);
  for (int i = 0; i<p; i++) 
    for (int j = 0; j<q; j++) 
      scanf("%d", &v2[i][j]);
  if (m!=p)
    printf("imposibil");
  else 
  for (int i = 0; i<n; i++)
    for (int j = 0; j<q; j++) {
      v3[i][j] = 0;
      for (int k = 0; k<m; k++) {
        v3[i][j]+=(v[i][k] * v2[k][j]);
      }
    }
  for (int i = 0; i<n; i++) {
    for (int j = 0; j<q; j++)
      printf("%d", v3[i][j]);
    printf("\n");
  }
}