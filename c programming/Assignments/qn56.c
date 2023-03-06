#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main() {
    int a = 10, b = 20, c;
    c = MAX(a, b);
    printf("The maximum of %d and %d is %d\n", a, b, c);
    return 0;
}
