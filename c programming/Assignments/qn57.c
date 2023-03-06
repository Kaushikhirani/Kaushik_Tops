#include <stdio.h>

struct pair {
    int a;
    int b;
};

void swap(struct pair *p) {
    int temp = p->a;
    p->a = p->b;
    p->b = temp;
}

int main() {
    struct pair p = {10, 20};
    printf("Before swapping: p.a = %d, p.b = %d\n", p.a, p.b);
    swap(&p);
    printf("After swapping: p.a = %d, p.b = %d\n", p.a, p.b);
    return 0;
}
