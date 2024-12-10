#include <stdio.h>

int main() {
  int n;
  int nr1;
  int nr2;
  int hasProp = 0;
  scanf("%d", &nr1);
  //suma cifre
  int copieTemp = nr1;
  int sumaCif = 0;
  while (copieTemp>0) {
    sumaCif += copieTemp%10;
    copieTemp/=10;
  }

  while (1) {

    scanf("%d", &nr2);

    copieTemp = nr1;
    sumaCif = 0;
    while (copieTemp>0) {
      sumaCif += copieTemp%10;
      copieTemp/=10;
    }
    if (nr2 == nr1 % sumaCif)
      printf("(%d, %d)\n", nr1, nr2);
    nr1 = nr2;
    if (!nr2)
      break;
  }
  return 0;
}