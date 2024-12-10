#include <stdio.h>
#include <math.h>

int main() {
  double r1, r2;
  int x;
  double epsilon;
  scanf("%d%lf", &x, &epsilon);
  r1 =(double)x/2;
  r2=0;
  while(fabs(r2-r1)>=epsilon) {
    r2=(r1+(double)x/r1)/2;
    r1=(r2+(double)x/r2)/2;
  }
  r2=(r1+(double)x/r1)/2;
  printf("%lf %lf", r1, r2);
}