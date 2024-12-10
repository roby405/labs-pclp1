#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  //ceva if pe aici cu suma oricaror 2 laturi >= cealalta latura
  if (a>=0 && b>=0 && c>=0)
    printf("DA");
  else 
    printf("NU");
  return 0;
}