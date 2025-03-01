#define MAX 2

#include <stdio.h>
#include <stdlib.h>

struct MATERIA {
    char nume[15];
    int ore_curs;
    enum tip_examen {
        C=1,
        S,
        A
    } tip_examen;
};

void citire_MAT(struct MATERIA* MATERIA) {
    fgets(MATERIA->nume, 15, stdin);
    char ore[10];
    fgets(ore, 10, stdin);
    MATERIA->ore_curs = atoi(ore);
    char tip[2];
    fgets(tip, 2, stdin);
    switch (tip[0]) {
        case 'C': {
            MATERIA->tip_examen = C;
            break;
        }
        case 'S': {
            MATERIA->tip_examen = S;
            break;
        }
        case 'A': {
            MATERIA->tip_examen = A;
            break;
        }
    }
    getc(stdin);
}

void citire_PROGRAMA(struct MATERIA PROGRAMA[]) {
    for (int i=0; i<MAX; i++) {
        citire_MAT(&(PROGRAMA[i]));
    }
}

void afisare(char tip, int ore, struct MATERIA PROGRAMA[]) {
    for (int i = 0; i<MAX; i++) {
        if (PROGRAMA[i].ore_curs == ore) {
            char tip2;
            switch (PROGRAMA[i].tip_examen) {
                case 1: {
                    tip2='C';
                    break;
                }
                case 2: {
                    tip2='S';
                    break;
                }
                case 3: {
                    tip2='A';
                }
            }
            if (tip2 == tip) {
                printf("Nume: %s", PROGRAMA[i].nume);
                printf("Ore: %d\n", PROGRAMA[i].ore_curs);
                printf("Tip Examen: %c\n", tip);
            }
        }
    }
}

int main() {
    struct MATERIA PROGRAMA[MAX];
    citire_PROGRAMA(PROGRAMA);
    afisare('C', 12, PROGRAMA);
}