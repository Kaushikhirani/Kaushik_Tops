#include <stdio.h>

int main() 
{
    
    float side;
    float circumference;

    
    printf("Enter the length of a side of the square: ");
    scanf("%f", &side);

  
    circumference = 4 * side;

  
    printf("Circumference of the square: %.2f\n", circumference);

    return 0;
}
