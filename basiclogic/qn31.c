#include <stdio.h>

int main() 
{
    float km, m;

    printf("Enter the distance in kilometers: ");
    scanf("%f", &km);

    m = km * 1000;
    
    printf("Equivalent distance in meters: %.2f\n", m);

    return 0;
}
