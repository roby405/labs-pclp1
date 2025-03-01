#include "Produs.h"
#include <stdlib.h>
#include <time.h>

#ifndef STD
#define STD
#include <stdio.h>
#endif

void creaza_fisier_binar(FILE* stream) {
  for (int i = 0; i<100; i++) {
    srand(time(NULL));
    int r = rand();
    Produs produs;
    strcpy(produs.numeProdus, "Produs");
    sprintf(produs.numeProdus, "%d", r);
    produs.cantitate = r%100;
    produs.pret_produs=r<=100 ? r : r%100;
    fwrite(&produs, sizeof(Produs), 1, stream);
  }
}

void afisare_pe_ecran(char* filename) {
  //v1
  // FILE *file = fopen(filename, "r");
  // char c;
  // int chars = 0;
  // while (c != fgetc(file)) {
  //   printf("%c", c);
  //   chars++;
  //   if (chars == sizeof(Produs)) {
  //     printf("\n");
  //     chars = 0;
  //   }
  // }
  //v2
  FILE *file = fopen(filename, "r");
  Produs produse[100];
  fread(produse, sizeof(Produs), 100, file);
  for (int i = 0; )
}

void

int main(int argc, char** argv) {
  Produs produs;
  for (int i = 0; i < argc; i++) {
    
  }
}