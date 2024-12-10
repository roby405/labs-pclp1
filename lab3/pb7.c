#include <stdio.h>
#include <math.h>


int main() {
  double sumaTaylor = 0.0;
  double termenCurent = 1.0;
  int indiceTermen = 0;
  
  int x, n;
  double epsilon;

  scanf("%d %d %lf", &x, &n, &epsilon);
  for (indiceTermen; indiceTermen<n; indiceTermen++) {
    sumaTaylor+=termenCurent;
    termenCurent=termenCurent*x/(indiceTermen+1);
  }
  printf("%lf", sumaTaylor);
  sumaTaylor=0.0;
  termenCurent=1.0;
  indiceTermen=0;
    while (termenCurent>=epsilon) {
    sumaTaylor+=termenCurent;
    termenCurent=termenCurent*x/(indiceTermen+1);
    indiceTermen++;
  }
  printf("%lf", sumaTaylor);
  printf("%lf", exp(x));
  printf("%lf", pow(2.718, x));
}