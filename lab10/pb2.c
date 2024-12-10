#include <stdio.h>
#include <stdlib.h>

struct multime {
unsigned int n;
unsigned char *a;
};

void init(struct multime *m, int n) {
  int size = ((n-1)%8) ? n/8+1 : n/8;
  m->a = (char *) malloc(size * sizeof(char));
  for (int i = 0; i<size; i++) {
    m->a[i] = 0;
  }
}          // iniţializează mulţimea m cu mulţimea vidă
void add(struct multime *m, int x) {
  m->a[x/8] = m->a[x/8] | (1<<(x%8));
  printf("%d", m->a[x/8]);
}     // adaugă pe x la mulţimea m
void del(struct multime *m, int x) {
  m->a[x/8] = m->a[x/8] & (~(1<<(x%8)));
}    // şterge pe x din mulţimea m
void print(struct multime *m) {
  for (int i = 0; i<=(m->n); i++) {
    if ((1<<(i%8)) & m->a[i/8])
      printf("%d ", i);
  }
}        // afişează mulţimea m
int contains(struct multime *m, int x) {
  return (1<<(x%8)) & m->a[x/8]; 
} // returnează 1 dacă x se află în mulţimea m şi 0 altfel

int main() {
  struct multime m;
  init(&m, 10);
  add(&m, 3);
  add(&m, 5);
  add(&m, 8);
  add(&m, 10);
  print(&m);
  del(&m, 5);
  contains(&m, 8);
  print(&m);
}