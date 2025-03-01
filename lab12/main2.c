#include "Produs2.h"

int main(int argc, char** argv) {
    creare_fisier(argv[1]);
    afisare_ecran(argv[1]);
    sorteaza_produse(argv[1]);
    afisare_ecran(argv[1]);
    cauta_si_modifica_produs(argv[1]);
}

void creare_fisier(char* nume_fisier) {
    FILE* fp = fopen(nume_fisier, "wb");
    
    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        Produs produs;
        int n = rand() % 200;
        char s[4];

        sprintf(s, "%d", n);
        strcpy(produs.nume_produs, "Produs");
        strcat(produs.nume_produs, s);
        produs.cantitate = n % 100;
        produs.pret_produs = n <= 100 ? n : n%100;

        fwrite(&produs, sizeof(produs), 1, fp);
    }

    fclose(fp);
}

void afisare_ecran(char* nume_fisier) {
    FILE* fp = fopen(nume_fisier, "rb");

    Produs produse[100];
    fread(produse, sizeof(Produs), 100, fp);

    for (int i = 0; i < 100; i++) {
        char s[100] = "Nume: ", s2[100] = "Cantitate: ", s3[100] = "Pret produs: ", copy[100];
        strcat(s, produse[i].nume_produs);
        sprintf(copy, "%d", produse[i].cantitate);
        strcat(s2, copy);
        strcat(s, s2);
        sprintf(copy, "%.2f", produse[i].pret_produs);
        strcat(s3, copy);
        strcat(s, s3);
        printf("%s", s);
    }

    fclose(fp);
}

void sorteaza_produse(char* nume_fisier) {
    FILE* fp = fopen(nume_fisier, "rb");

    Produs produse[100];
    fread(produse, sizeof(Produs), 100, fp);

    for (int i = 0; i < 99; i++) {
        for (int j = i + 1; j < 100; j++) {
            if (strcmp(produse[i].nume_produs, produse[j].nume_produs) > 0) {
                Produs aux = produse[i];
                produse[i] = produse[j];
                produse[j] = aux;
            }
        }
    }
    fclose(fp);

    fp = fopen(nume_fisier, "wb");
    fwrite(produse, sizeof(Produs), 100, fp);

    fclose(fp);
}

int cauta_produs(char* nume_fisier, char* nume_produs) {
    FILE* fp = fopen(nume_fisier, "rb");
    int i = 0;

    scanf("%s", nume_produs);

    Produs produse[100];
    fread(produse, sizeof(Produs), 100, fp);

    int ok = 0;
    for (i = 0; i < 100; i++) {
        if (strcmp(produse[i].nume_produs, nume_produs) == 0) {
            printf("Nume: %s", nume_produs);
            printf("Cantitate: %d\n", produse[i].cantitate);
            printf("Pret: %.2f\n", produse[i].pret_produs);
            ok = 1;
            break;
        }
    }

    if (!ok) {
        printf("Nu am gasit niciun produs cu acest nume");
        return -1;
    }
    fclose(fp);

    return i;
}

void cauta_si_modifica_produs(char* nume_fisier) {
    char nume_produs[20];
    int ult_index = cauta_produs(nume_fisier, nume_produs);

    FILE* fp = fopen(nume_fisier, "r+b");
    Produs copy;
    for (int i = 0; i < ult_index; i++) {
        fread(&copy, sizeof(Produs), 1, fp);
    }
    scanf("%s", copy.nume_produs);
    scanf("%d", &copy.cantitate);
    scanf("%f", &copy.pret_produs);
    fwrite(&copy, sizeof(Produs), 1, fp);

    fclose(fp);
}