#include <stdio.h>
#include <string.h>

char *strdel(char *p, int n) {
  strcpy(p, p+n);
  return p;
}

char *strins(char *p, char *s) {
  char aux[100];
  strcpy(aux, s);
  strcat(aux, p);
  strcpy(p, aux);
  return p;
}

char *strschimba(char *p, char *p2, char *s) {
  char* aux = s;
  while (strstr(s, p) != NULL) {
    char * aux2 = strstr(s, p);
    strdel(aux2, strlen(p));
    strins(aux2, p2);
    s += (strlen(s) - strlen(aux2)) + strlen(p2);
  }
  return aux;
}

int main() {
  char s[100];
  char s2[100];
  char s3[100] = "ala bala portocala";
  // int n;
  scanf("%s", s);
  scanf("%s", s2);
  printf("%s", strschimba(s, s2, s3));
  // scanf("%d", &n);
  // strdel(s+3, n);
  // printf("%s", s);
  // char s2[100] = "ana";
  // strins(s, s2);
  // printf("%s", s);
}