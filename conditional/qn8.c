#include <stdio.h>

int main() 
{
    float height;

    printf("Enter the height in centimeters: ");
    scanf("%f", &height);

    if (height < 150)
	 {
        printf(" Short\n");
    } else if (height >= 150 && height < 180)
	 {
        printf(" Average\n");
    } else {
        printf(" Tall\n");
    }
3
    return 0;
}
