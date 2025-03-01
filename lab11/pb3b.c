#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  FILE *pFile;
  char s[2000] = {0};
  pFile = fopen(argv[argc-2] , "r");
  if (pFile == NULL) {
      printf("Nu s-a putut deschide fisierul");
      return 1;
  }
  int lines = 0;
  while (fgets(s, 2000, pFile) != NULL) {
    lines++;
    if (strstr(s, argv[argc-1]) != NULL)
      printf("%s", s);
  }
  for (int i = 1; i<argc-2; i++) {
    if (strcmp(argv[i], "n") == 0)
      printf("Numar linii: %d", lines);
  }
  fclose(pFile);

}