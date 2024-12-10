#include <stdio.h>

int main() {
  int l1=0, l2, l3;
  int P;
  scanf("%d", &P);
  l2 = P/2;
  l3 = P/2;
  if (P%2==1)
    l3++;
  while(1){
    if ((l3-l2) == 2) {
      printf("%d %d %d\n", l1, l2, l3);
      printf("%d %d %d\n", l1, l2+1, l3-1);
      l3--;
      l2++;
    } else {
      printf("%d %d %d\n", l1, l2, l3);
    }
    l1++;
    l2--;
    if (l1>l2)
      break;
  }
  return 0;
}