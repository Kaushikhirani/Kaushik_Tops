#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {
            printf("%d/%d - ", i, i + 1);
        } else {
            printf("%d/%d + ", i, i + 1);
        }
    }

    return 0;
}
