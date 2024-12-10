#include <stdio.h>

int transforma(int n) {
  int v[10] = {0};
  int nc = n;
  int dsc = 0;
  while (n>0) {
    if(n%10==0) {
      dsc = 1;
      break;
    }
    n/=10;
  }
  n = nc;
  long long int p = 1;
  while (n>0) {
    v[n%10]++;
    p*=10;
    n/=10;
  }
  p/=10;
  n = 0;
  if(dsc) {
    for (int i = 9; i>=0; i--) {
      while (v[i]>0) {
        n += i*p;
        p/=10;
        v[i]--;
      }
    }
  } else {
    for (int i = 1; i<=9; i++) {
      while (v[i]>0) {
        n+=i*p;
        p/=10;
        v[i]--;
      }
    }
  }
  return n;
}

int main() {
    int n;
  scanf("%d",&n);
  printf("%d", transforma(n));
}