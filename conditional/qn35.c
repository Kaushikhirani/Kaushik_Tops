#include <stdio.h>

int main()
 {
    int monthnumber;

    
    printf("Enter the month number (1-12): ");
    scanf("%d", &monthnumber);

    if (monthnumber < 1 || monthnumber > 12)
	 {
        printf("Invalid month number!\n");
        return 1;
    }

    
    int days;
    switch(monthnumber)
	 {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = 28; 
            break;
    }

    
    printf("Number of days in month %d is: %d\n", monthnumber, days);

    return 0;
}
