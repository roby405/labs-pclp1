#include <stdio.h>

int main() {
  int n, v[100];
  scanf("%d", &n);
  for (int i = 0; i<n; i++) {
    scanf("%d", &v[i]);
  }
  int cresc = 0, descr = 0, constant = 0;
  if (v[0]>v[1]) {
    cresc = 1;
  } else if (v[0]==v[1]) {
    constant = 1;
  } else {
    descr = 1;
  }
  if (cresc) {
    int ultimul = v[0];
    for (int i = 0; i<n; i++) {
      if(cresc && !(v[i] > ultimul)) {
        cresc = 0;

      }
      ultimul = v[i];
    }
  }
    if (descr) {
    int ultimul = v[0];
    for (int i = 0; i<n; i++) {
      if(descr && !(v[i] > ultimul)) {
        descr = 0;

      }
      ultimul = v[i];
    }
  }
    if (constant) {
    int ultimul = v[0];
    for (int i = 0; i<n; i++) {
      if(constant && !(v[i] >== ultimul)) {
        constant = 0;
        
      }
      ultimul = v[i];
    }
  }
  if(!(constant || descr || cresc))
    printf("niciuna");
}