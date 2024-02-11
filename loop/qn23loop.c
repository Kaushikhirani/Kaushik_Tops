#include <stdio.h>

int main() {
    int n;

    // Input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Display the series without calculating the sum
    printf("Series: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d", i);

        if (i < n) {
            printf(" + ");
        }
    }

    printf("\n");

    return 0;
}
