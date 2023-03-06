#include <stdio.h>

void  main() {
    int num, first_digit, last_digit, sum;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // calculate the first digit
    first_digit = num;
    while (first_digit >= 10) {
        first_digit /= 10;
    }
    
    // calculate the last digit
    last_digit = num % 10;
    
    // calculate the sum of first and last digit
    sum = first_digit + last_digit;
    
    printf("Sum of first and last digit: %d\n", sum);
    
    
}