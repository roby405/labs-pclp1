#include <stdio.h>

int main() {
  for (int i = 32; i<=127; i++) {
    int countedChars = 0;
    while (countedChars < 10 && i<=127) {
      printf("%c = %d ", i, i);
      i++;
      countedChars++;
    }
    printf("\n");
  }
  return 0;
}