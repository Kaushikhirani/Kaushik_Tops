#include <stdio.h>

int main()
 {
    
    int days;
    float months;

    printf("Enter the number of days: ");
    scanf("%d", &days);   
    months = days / 30.44; 

    printf("Equivalent months: %.2f\n", months);

    return 0;
}
