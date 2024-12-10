#include <stdio.h>

int main() {
  int n, v[100];
  int sumaMax=-1;
  int sumaCurenta=0;
  int startSuma = 0;
  int startTestSuma = 0;
  int lungimeSuma=0;
  int lungimeSumaTest=0;
  int intalnitElemPoz=0;
  scanf("%d", &n);
  for (int i = 0; i<n; i++) {
    scanf("%d", &v[i]);
    if (v[i]>=0) intalnitElemPoz = 1;
    sumaCurenta+=v[i];
    if (sumaCurenta < 0) {
      sumaCurenta = 0;
      lungimeSumaTest = 0;
    } else {
      if (lungimeSumaTest==0) {
        startTestSuma = i;
      }
      lungimeSumaTest++;
      if (sumaCurenta > sumaMax) {
        sumaMax = sumaCurenta;
        lungimeSuma = lungimeSumaTest;
        startSuma = startTestSuma;
      }
    }
  }
  for (int i = startSuma; i< startSuma+lungimeSuma; i++)
    printf("%d ", v[i]);
}