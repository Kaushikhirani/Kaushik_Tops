#include <stdio.h>

int main()
 {
    int num;

    
    printf("Enter month number (1-12): ");
    scanf("%d", &num);

    
    if (num < 1 || num > 12)
	 {
        printf("Invalid month number!\n");
        return 1; 
    }

   
    int daysinmonth;
    switch(num)
	 {
        case 2:
            daysinmonth = 28; 
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysinmonth = 30;
            break;
        default:
            daysinmonth = 31;
    }

   
    printf("Number of days in month %d is: %d\n", num, daysinmonth);

    return 0;
}
