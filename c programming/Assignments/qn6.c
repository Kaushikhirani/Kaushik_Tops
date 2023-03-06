#include <stdio.h>

void main() {
    float principle, rate, time, SI;

    // Input principle, rate, and time
    printf("Enter principle: ");
    scanf("%f", &principle);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter time: ");
    scanf("%f", &time);

    // Calculate simple interest
    SI = (principle * rate * time) / 100;

    // Output the result
    printf("Simple Interest = %f\n", SI);

  
}