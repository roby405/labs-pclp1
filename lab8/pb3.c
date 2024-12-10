#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char s[20];
  char **sp;
  int *ap;
  int n;
  int totalSize = 0;
  scanf("%d", &n);
  sp = (char**)malloc(n * sizeof(char*));
  ap = (int*)malloc(n*sizeof(int));
  for (int i = 0; i<n; i++) {
    scanf("%s", s);
    int foundAnyMatches = 0;
    for (int j = 0; j<totalSize; j++) {
      if (strcmp(s, sp[j]) == 0) {
        ap[j]++;
        foundAnyMatches = 1;
      }
    }
    if (foundAnyMatches == 0) {
      sp[totalSize] = (char*)malloc(20 * sizeof(char));
      strcpy(sp[totalSize], s);
      ap[totalSize] = 1;
      totalSize++;
    }
  }
  for (int i = 0; i < totalSize; i++) {
    printf("%d %s\n", ap[i], sp[i]);
    free(sp[i]);
  }
  free(ap);
  free(sp);

}