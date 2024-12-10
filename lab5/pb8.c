#ifndef max
    #define max(a,b) ((a) > (b) ? (a) : (b))
#endif

#ifndef min
    #define min(a,b) ((a) > (b) ? (b) : (a))
#endif

#include <stdio.h>

int inters(int x11, int x12, int x21, int x22) {
  if (x11<x21 && x12>x22)
    return (x22-x21);
  else if (x12>x21)
    return (x21-x12);
  else
    return 0;
}

int arie_intersectie(int x11, int y11, int x12, int y12, int x21, int y21, int x22, int y22) {
  int xlung = 0;
  int ylung = 0;
  if(x11>x21)
    xlung = inters(x21, x22, x11, x12);
  else
    xlung = inters(x11, x12, x21, x22);
  if (y11 >y21)
    ylung = inters(y21, y22, y11, y12);
  else
    ylung = inters(y11, y12, y21, y22);

  return xlung *ylung;
}

int main() {
  int a,b,c,d,e,f,g,h;
  scanf("%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h);
  printf("%d", arie_intersectie(a,b,c,d,e,f,g,h));
}