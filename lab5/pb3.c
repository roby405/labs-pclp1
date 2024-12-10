#include <stdio.h>

int prim(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  else if (n==2) return 1;
  else if (n%2==0) return 0;
  int i;
  for (i = 3; i*i<=n; i+=2) {
    if (n%i==0) return 0;
  }
  return 1;
}

int prim2(int n) {
  for (int i = 1; i<=n/2; i++) {
    if (prim(i) && prim(n-i))
      printf("%d+%d\n", i, n-i);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d", prim(n));
  printf("\n");
  prim2(n);
}