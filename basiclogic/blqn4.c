#include <stdio.h>

int main()
 {
    
    float sideLength, area;

    printf("Enter the side length of the square: ");
    scanf("%f", &sideLength);
 
    area = sideLength * sideLength;
    
    printf("Area of the square: %.2f\n", area);

    return 0;
}
