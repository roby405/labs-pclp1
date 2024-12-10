#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  int isoscel = 0;
  int dreptunghic = 0;
  int echilateral = 0;
  if (a==b==c) 
    echilateral=1;
  else if (a==b || b==c || a==c)
    isoscel = 1;
  if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
    dreptunghic = 1;
  if (echilateral==1)
    printf("echilateral");
  if (isoscel==1 && dreptunghic==1) 
    printf("dreptunghic isoscel");
  else if (isoscel == 1)
    printf("isoscel");
  else if (dreptunghic==1)
    printf("dreptunghic");
  if (echilateral || isoscel || dreptunghic == 0)
    printf("oarecare");
}