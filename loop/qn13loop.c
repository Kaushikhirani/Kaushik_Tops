#include <stdio.h>

int main() {
    int num, originalNum;
    long long factorial = 1;

    
    printf("Enter a positive integer: ");
    scanf("%d", &num);


    originalNum = num;

    
    while (num > 0) {
        factorial *= num;
        --num;
    }

    
    printf("Factorial of %d = %lld\n", originalNum, factorial);

    return 0;
}
