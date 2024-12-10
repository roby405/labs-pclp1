#include <stdio.h>

void spirala (int A[][10], int n, int m, int V[]) {
  int sidesVU = n;
  int sidesHR = m;
  int sidesVD = 0;
  int sidesHL = 0;
  int index = 0;
  while (index <n*m) {
    for (int i = sidesVD; i < sidesVU; i++) {
      V[index++] = A[i][sidesHL];
    }
    sidesHL++;
    for (int i = sidesHL; i < sidesHR; i++) {
      V[index++] = A[sidesVU-1][i];
    }
    sidesVU--;

    for (int i = sidesVU - 1; i >= sidesVD; i--) {
      V[index++] = A[i][sidesHR-1];
    }
    sidesHR--;
    for (int i = sidesHR - 1; i >= sidesHL; i--) {
      V[index++] = A[sidesVD][i];
    }
    sidesVD++;
  }
}

void afisare (int V[], int dim) {
  for (int i = 0; i < dim; i++) {
    printf("%d ", V[i]);
  }
}

int main() {
  // Your code here
  int n, m;
  scanf("%d", &n);
  scanf("%d", &m);
  int A[10][10];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &A[i][j]);
    }
  }
  int V[100];
  spirala(A, n, m, V);
  afisare(V, n*m);
  return 0;
}