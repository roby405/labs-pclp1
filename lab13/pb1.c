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
}