#include <stdio.h>

int main() {
    int n;   
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Series: ");
    
    for (int i = 1; i <= n; ++i) {
        printf("(%d*%d) ", i, i);
            
        if (i < n) {
            printf("+ ");
        }
    }

    printf("\n");

    return 0;
}
