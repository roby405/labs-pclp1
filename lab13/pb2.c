#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*) a - *(int*) b;
}

int main() {
    int vec[10] = {0, 3, 2, 5, 19, 1, 49, 2, 7, 10};
    for (int i = 0; i < 10; i++)
        printf("%d ", vec[i]);
    printf("\n");
    qsort(vec, 10, sizeof(int), compare);
    for (int i = 0; i < 10; i++)
        printf("%d ", vec[i]);
    printf("\n");
    while (1) {
        int x; 
        scanf("%d", &x);
        if (x == -1)
            break;
        int* res = (int *)bsearch(&x, vec, 10, sizeof(int), compare);
        if (res == NULL) {
            printf("Nu apare");
        } else {
            printf("%ld", res - vec);
        }
    }
}