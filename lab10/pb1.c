#include <stdio.h>
#include <math.h>

double integrala(double (*func) (double x), double a, double b, int n) {
  double interval = (b-a)/n;
  double suma= 0;
  for (int i = 0; i<n; i++) {
    suma+= interval*func(a+i*interval);
  }
  return suma;
}

int main() {
  double x;
  x = integrala(cos, 0, M_PI, 1000);
  printf("%lf", x);
}