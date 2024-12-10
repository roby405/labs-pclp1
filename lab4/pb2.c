#include <stdio.h>

int main() {
  int poz=0, neg=0;
  int a[100];
  int n;
  scanf("%d", &n);
  for (int i = 0; i<n; i++) {
    scanf("%d", &a[i]);
    if (a[i]>=0) poz++;
    else neg++;
  }
  printf("%d %d", poz, neg);
}