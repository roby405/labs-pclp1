#include <stdio.h>

int extrage(int v1[], int size, int v2[], int size2, int result[]) {
  // Function implementation
  int index = 0;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size2; j++) {
      if (v1[i] == v2[j]) {
        result[index++] = v1[i];
        break;
      }
    }
  }
  return index;
}

int main() {
  // Example usage of the extrage function
  int v1[100];
  int v2[100];
  int result[100];
  int n, m;
  scanf("%d", &n);
  scanf("%d", &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &v1[i]);
  }
  for (int i = 0; i < m; i++) {
    scanf("%d", &v2[i]);
  }
  int size3 = extrage(v1, n, v2, m, result);

  // Print the result
  for (int i = 0; i < size3; i++) {
    printf("%d ", result[i]);
  }
  printf("\n");

  return 0;
}