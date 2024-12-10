#include <stdio.h>

int strcmpcool(char s1[], char s2[]) {
  int i = 0;
  while (s1[i] != '\0' && s2[i] != '\0') {
    if (s1[i] != s2[i])
      break;
    i++;
  }
  if (s1[i] > s2[i])
    return 1;
  else if (s1[i] < s2[i])
    return -1;
  else
    return 0;
}

int main() {
  // Your code here
  char s[100];
  scanf("%s", s);
  char s2[100];
  scanf("%s", s2);
  printf("%d", strcmpcool(s, s2));

  return 0;
}