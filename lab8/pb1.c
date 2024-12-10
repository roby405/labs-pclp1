#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* my_replace(char *s, char *s1, char *s2) {
  char *p = strstr(s, s1);
  if (p == NULL) {
    return s;
  }
  int len = strlen(s) + strlen(s2) - strlen(s1);
  char *s_copy = (char*)malloc(len * sizeof(char));
  strncpy(s_copy, s, strlen(s) - strlen(p));
  strcat(s_copy, s2);
  strcat(s_copy, p + strlen(s1));
  *(s+len) = '\0';
  return s_copy;
}

int main() {
  char s[100]="mie imi plac pointerii", s1[100], s2[100];
  scanf("%s", s1);
  scanf("%s", s2);
  // scanf("%s", s);
  printf("%s\n", my_replace(s, s1, s2));
}