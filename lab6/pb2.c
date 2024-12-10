#include <stdio.h>
#include <math.h>

void unghi(double x, double y, double z, double *u1, double *u2, double *u3) {
  double cosin = (y*y + z*z - x*x) / (2*y*z);
  *u1 = acos(cosin) / M_PI * 180;
  *u2 = acos((x*x + z*z - y*y) / (2*x*z)) / M_PI * 180;
  *u3 = acos((x*x + y*y - z*z) / (2*x*y)) / M_PI * 180;
}

int main() {
  // Your code here
  double x, y, z;
  double u1, u2, u3;
  scanf("%lf%lf%lf", &x, &y, &z);
  unghi(x, y, z, &u1, &u2, &u3);
  printf("%.3lf %.3lf %.3lf", u1, u2, u3);
  return 0;
}