#include <stdio.h>

int factorial(int n) {
  int prod = 1;
  if(n==0)
    return 1;
  while (n>=1) {
    prod*=n;
    n--;
  }
  return prod;
}

double putere(double x, int n) {
  double xog = x;
  while(n-1>0) {
    x*=xog;
    n--;
  }
  return x;
}
double taylor(double x, int n) {
  if (n==0) return 1;
  double suma = 1.0;
  for (int i = 1; i<=n; i++) {
    suma+=(putere(x, i)/factorial(i));
  }
  return suma;
}


int main() {
  double x;
  int n;
  scanf("%lf%d", &x, &n);
  printf("%lf", taylor(x, n));
}