#include <stdio.h>

int main()
 {
   
    float side; 
    float circumference;
 
    printf("Enter the length or width of the rectangle: ");
    scanf("%f", &side);  
    circumference = 4 * side;

    printf("Circumference of the rectangle: %.2f\n", circumference);

    return 0;
}
