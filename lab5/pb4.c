#ifndef max
    #define min(a,b) ((a) > (b) ? (b) : (a))
#endif

#include <stdio.h>

int cmmdc(int a, int b) {
  int max = 0;
  for (int i = 1; i <= min(a,b); i++)
    if (a%i==0 && b%i==0)
      max = i;
  return max;
}

int cmmmc(int a, int b) {
  return a*b/cmmdc(a,b);
}

int main() {
  int x1, y1, x2, y2;
  scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
  int cmmc = cmmmc(y1, y2);
  printf("%d %d\n%d %d", x1*(cmmc/y1), y1*(cmmc/y1), x2*(cmmc/y2), y2*(cmmc/y2));
}