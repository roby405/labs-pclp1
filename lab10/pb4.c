#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int n, m;
    int **a;
} MATRICE;

/* creează o matrice de dimensiuni n x m. Funcţia va aloca memorie pentru o nouă variabilă de tip MATRICE şi pentru tabloul conţinut în această 
 * structură (referit prin membrul a). Funcţia va returna adresa noii variabile de tip MATRICE create.
 */
MATRICE* creeaza_MATRICE(int n, int m) {
    MATRICE* mat = (MATRICE*)malloc(sizeof(MATRICE));
    mat->n = n;
    mat->m = m;
    mat->a = (int**)malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++) {
        mat->a[i] = (int *)malloc(m*sizeof(int));
    }
    return mat;
}
 
/* citeşte de la tastatură o matrice. Dimensiunile se regăsesc în cadrul matricei transmise ca parametru, 
 * urmând a se citi de la tastatură doar elementele tabloului. Funcţia va returna tot adresa ma.
 */
MATRICE* citeste_MATRICE(MATRICE* ma) {
    for (int i = 0; i<ma->n; i++) {
        for (int j = 0; j < ma->m; j++)
            scanf("%d", &ma->a[i][j]);
    }
    return ma;
}
 
/* afiseaza pe ecran matricea transmisă ca parametru.
 */
void scrie_MATRICE(MATRICE* ma) {
    for (int i = 0 ; i < ma->n; i++) {
        for (int j = 0; j < ma->m; j++)
            printf("%d ", ma->a[i][j]);
        printf("\n");
    }
}
 
/* dacă matricile ma şi mb au aceleaşi dimensiuni, atunci funcţia returnează adresa unei noi 
 * matrici care va conţine suma matricelor ma şi mb. În caz contrar, funcţia va returna NULL 
 *(adunarea nu se poate face, deci rezultatul nu există).
 */
MATRICE* aduna_MATRICE(MATRICE* ma, MATRICE* mb) {
    if (ma->n != mb->n || ma->m != mb->m)
        return NULL;
    for (int i = 0; i < ma->n; i++)
        for (int j = 0; j < ma->m; j++)
            ma->a[i][j] += mb->a[i][j];
    return ma;
}
 
/* dacă matricile ma şi mb se pot înmulţi, atunci funcţia returnează adresa unei noi matrici 
 * care va conţine produsul matricelor ma şi mb. În caz contrar, funcţia va returna NULL 
 * (înmulţirea nu se poate face, deci rezultatul nu există).
 */
MATRICE* inmulteste_MATRICE(MATRICE* ma, MATRICE* mb) {
    if (ma->m != mb->n)
        return NULL;
    MATRICE* mc = creeaza_MATRICE(ma->n, mb->m);
    for (int i = 0; i < ma->n; i++) {
        for (int j = 0; j < mb->m; j++) {
            int new = 0;
            for (int k = 0; k < ma->m; k++)
                new += ma->a[i][k] * mb->a[k][j];
            mc->a[i][j] = new;
        }
    }
    return mc;
}

int main() {
    MATRICE* ma = creeaza_MATRICE(2, 2);
    MATRICE* mb = creeaza_MATRICE(2, 3);
    MATRICE* mc = creeaza_MATRICE(2, 3);
    ma = citeste_MATRICE(ma);
    mb = citeste_MATRICE(mb);
    mc = citeste_MATRICE(mc);
    scrie_MATRICE(ma);
    scrie_MATRICE(mb);
    scrie_MATRICE(mc);
    mb = aduna_MATRICE(mb, mc);
    scrie_MATRICE(mb);
    ma = inmulteste_MATRICE(ma, mb);
    scrie_MATRICE(ma);
}