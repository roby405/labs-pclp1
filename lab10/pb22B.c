#include <stdio.h>
#include <stdlib.h>

struct multime {
    unsigned int size;
    unsigned char *a;
};

void init (struct multime *a) {
    // scanf("%c", a->a);
    a->a = (unsigned char*)malloc(((a->size / 8) + 1) * sizeof(unsigned char));
    for (int i = 0; i < a->size / 8; i++) {
        a->a[i] = 0;
    }
}

void add(struct multime *a, int x) {
    a->a[x/8] = a->a[x/8] | (1<<(x%8));
}

void del(struct multime *a, int x) {
    a->a[x/8] = a->a[x/8] & (~(1<<(x%8)));
}

int contains(struct multime *a, int x) {
    return (a->a[x/8] & (1<<(x%8)));
}

void print(struct multime *a) {
    for (int i=0; i<a->size; i++) {
        if (contains(a, i))
            printf("%d ", i);
    }
    printf("\n");
}


int main() {
    struct multime nr;
    scanf("%d", &nr.size);
    init(&nr);
    add(&nr, 11);
    add(&nr, 22);
    print(&nr);
    del(&nr, 22);
    print(&nr);
}