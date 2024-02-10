#include <stdio.h>

int main()
 {

    float base, height;
    float area;
   
    printf("Enter the length of the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
   
    area = 0.5 * base * height;

    printf("Area of the triangle: %.2f\n", area);

    return 0;
}
