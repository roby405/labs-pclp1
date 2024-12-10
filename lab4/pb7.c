#include <stdio.h>

int main() {
  int n;
  int v[100];
  int indiceStart=-1;
  int indiceTest=0;
  int ultimulElement;
  int lungimeTest;
  int lungimeTotala=0;

  scanf("%d", &n);
  for (int i = 0; i<n; i++) {
    scanf("%d", &v[i]);
    if (indiceStart==-1) {
      ultimulElement = v[i];
      indiceStart = 0;
      lungimeTotala = 1;
      indiceTest = 0;
      lungimeTest = 1;
    } else {
      if (v[i]>ultimulElement) {
        ultimulElement = v[i];
        lungimeTest++;
        if (lungimeTest > lungimeTotala) {
          indiceStart = indiceTest;
          lungimeTotala = lungimeTest;
        }
      } else {
        indiceTest = i;
        lungimeTest = 1;
        ultimulElement = v[i];
      }
    }
  }
  for (int i = indiceStart; i<indiceStart+lungimeTotala; i++) {
    printf("%d ", v[i]);
  }
}