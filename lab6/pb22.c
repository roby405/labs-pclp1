#include <stdio.h>
#include <math.h>

double getCos(double x, double y, double z) {
  return (y*y + z*z - x*x) / (2*y*z);
}

void unghi(double v1[], double v2[]) {
  v2[0] = acos(getCos(v1[0], v1[1], v1[2])) / M_PI * 180;
  v2[1] = acos(getCos(v1[1], v1[2], v1[0])) / M_PI * 180;
  v2[2] = acos(getCos(v1[2], v1[0], v1[1])) / M_PI * 180;
}

int main() {
  // Your code here
  double v[3], v2[3];
  scanf("%lf%lf%lf", &v[0], &v[1], &v[2]);
  unghi(v, v2);
  printf("%.3lf %.3lf %.3lf", v2[0], v2[1], v2[2]);
  return 0;
}