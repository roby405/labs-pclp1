#include <stdio.h>

int main() {
  int v[1000], v2[1000], v3[2000];
  int n1, n2;
  scanf("%d", &n1);
  for (int i = 0; i<n1; i++) {
    scanf("%d", &v[i]);
  }
  scanf("%d", &n2);
  for (int i = 0; i<n2; i++) {
    scanf("%d", &v2[i]);
  }
  int i1 = 0, i2 = 0;
  for (int i = 0; i<n1+n2; i++) {
    int minim;
    if (i1==n1 || i2==n2) {
      if (i1 == n1)
        minim = v2[i2++];
      else {
        minim = v[i1++];
      }
    }
    else {
      if (v[i1]<v2[i2]) {
        minim=v[i1];
        i1++;
      }
      else {
        minim = v2[i2];
        i2++;
      }
    }
    v3[i] = minim;
  }
  for (int i = 0; i<n1+n2; i++) {
    printf("%d ", v3[i]);
  }
}