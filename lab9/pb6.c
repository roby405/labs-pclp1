#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char cuv[10];
  int apar;
} Pereche;

int main() {
  int n;
  Pereche* perechi;
  int index = 0;
  int cap = 4;
  perechi = (Pereche*) malloc(cap*sizeof(Pereche));
  scanf("%d", &n);
  for (int i = 0; i<n; i++) {
    char* cuv;
    scanf("%s", cuv);
    int foundMatches = 0;
    for (int i = 0; i<index; i++) {
      if (strcmp(cuv, perechi[i].cuv) == 0) {
        perechi[i].apar++;
        foundMatches=1;
        break;
      }
    }
    if (!foundMatches) {
      if (index == cap - 1) {
        perechi = (Pereche*) realloc(perechi, cap*2*sizeof(Pereche));
        cap *= 2;
      }
      strcpy(perechi[index].cuv, cuv);
      perechi[index++].apar = 1;
    }
  }
  for (int i = 0; i < index; i++) {
    printf("%s %d\n", perechi[i].cuv, perechi[i].apar);
  }
  return 0;
}