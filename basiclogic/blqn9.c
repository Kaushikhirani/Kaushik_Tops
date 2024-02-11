#include <stdio.h>

int main(){
 
    float sideA, sideB, sideC;
    float circumference;

    printf("Enter the length of side a: ");
    scanf("%f", &sideA);

    printf("Enter the length of side b: ");
    scanf("%f", &sideB);

    printf("Enter the length of side c: ");
    scanf("%f", &sideC);

    circumference = sideA + sideB + sideC;
  
    printf("Circumference of the triangle: %.2f\n", circumference);

    return 0;
}
