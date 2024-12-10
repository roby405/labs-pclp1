#include <stdio.h>

int main() {
  int n, m;
  scanf("%i%i", &n, &m);
  int readChars = 1;
  while (readChars <= n) {
    for (int i = 0; i < m && readChars <= n; i++) {
      printf("%d ", readChars);
      readChars++;
    }
    printf("\n");
  }
}