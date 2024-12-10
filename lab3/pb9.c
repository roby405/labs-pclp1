#include <stdio.h>

int main() {
  int n;
  int fiboTerm = 1;
  int n1 = 0;
  int n2 = 1;
  while(fiboTerm <= n) {
    int newTerm = n1+n2;
    fiboTerm++;
    n1 = n2;
    n2 = newTerm;
    int numarDivizori = 0;
    for(int d = 1; d <= n2; d++) {
        if(n2 % d == 0) {
            numarDivizori++;
        }
    }
    if(numarDivizori == 2) {
      printf("%d\n", n2);
    }
  }
  return 0;
}