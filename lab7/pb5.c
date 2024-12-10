#include <stdio.h>
#include <limits.h>
#include <math.h>

void panta(int x1, int y1, int x2, int y2, float *m, float *n) {
  if (*m==0)
    *m = INT_MAX;
  if (fabs((*m-((y2-y1)/(x2-x1)*(*n) + (y1-x1*(y2-y1)/(x2-x1)))) < 0.001))
    printf("DA");
  else
    printf("NU");
}

int main() {
  int x1, y1, x2, y2;
  float m, n;
  scanf("%d", &x1);
  scanf("%d", &y1);
  scanf("%d", &x2);
  scanf("%d", &y2);
  scanf("%f", &m);
  scanf("%f", &n);
  panta(x1, y1, x2, y2, &m, &n);
}