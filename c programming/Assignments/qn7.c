#include <stdio.h>

void main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output the result
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    
}