#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  FILE *pFile;
  char s[2000] = {0};

  pFile = fopen(argv[1] , "r");
  if (pFile == NULL) {
      printf("Nu s-a putut deschide fisierul");
      return 1;
  }
  int i = 0;
  while (fgets(s, 2000, pFile) != NULL) {
    if (strstr(s, argv[2]) != NULL)
      printf("%s", s);
  }
  fclose(pFile);

}