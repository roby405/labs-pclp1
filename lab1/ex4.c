#include <stdio.h>

int main() {
  int X, Y;
  scanf("%d%d", &X, &Y);
  if(X==0 || Y==0)
    printf("punct pe axe");
  else {
    if(X>0 && Y>0) printf("1");
    if (X>0 && Y<0) printf("2");
    if (X<0 && Y<0) printf("3");
    if (X<0 && Y>0) printf("4");
  }
}