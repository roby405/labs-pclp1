#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct {
    char nume_produs[20];
    int cantitate;
    float pret_produs;
} Produs;

void creare_fisier(char* nume_fisier);

void afisare_ecran(char* nume_fisier); 

void sorteaza_produse(char* nume_fisier);

int cauta_produs(char* nume_fisier, char* nume_produs);

void cauta_si_modifica_produs(char* nume_fisier);