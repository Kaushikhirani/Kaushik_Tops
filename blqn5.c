#include <stdio.h>

int main() 
{
    
    float side;
    float surfaceArea;

    printf("Enter the length of a side of the cube: ");
    scanf("%f", &side);
   
    surfaceArea = 6 * side * side;

    printf("Surface area of the cube: %.2f\n", surfaceArea);

    return 0;
}
