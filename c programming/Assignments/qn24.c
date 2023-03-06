#include <stdio.h>

void main()
 {
    int n, sum = 0, digit;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while(n > 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    
    printf("The summation of the digits is %d\n", sum);

   
}