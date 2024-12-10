#include <stdio.h>

char* substr(char *src, int n, char *dest) {
  for (int i = 0; i<n; i++)
    dest[i] = src[i];
  return dest;
}

int main() {
  char src[100];
  int start;
  int n;
  char dest[100];
  scanf("%s", src);
  scanf("%d", &start);
  scanf("%d", &n);
  printf("%s", substr(src + start, n, dest));
}