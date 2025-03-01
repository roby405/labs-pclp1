#include <stdio.h>

struct multime {
    unsigned char a;
};

void init (struct multime *a) {
    // scanf("%c", a->a);
    a->a = 0;
}

void add(struct multime *a, int x) {
    a->a = a->a | (1<<x);
}

void del(struct multime *a, int x) {
    a->a = a->a & (~(1<<x));
}

int contains(struct multime *a, int x) {
    return (a->a & (1<<x));
}

void print(struct multime *a) {
    for (int i=0; i<8; i++) {
        if (contains(a, i))
            printf("%d ", i);
    }
    printf("\n");
}


int main() {
    struct multime nr;
    init(&nr);
    add(&nr, 1);
    add(&nr, 2);
    print(&nr);
    del(&nr, 2);
    print(&nr);
}