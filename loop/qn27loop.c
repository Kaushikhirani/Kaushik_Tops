#include <stdio.h>

int main() {
    int n;

  
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

   
    int term = 1;
    for (int i = 1; i <= n; ++i) {
        printf("%d ", term);
        term *= 3;
    }

    return 0;
}
