#include <stdio.h>

int main() 
{
    int month;

   
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    
    if (month < 1 || month > 12) {
        printf("Invalid month number!\n");
        return 1; 
    }

   
    char *monthname;
    switch(month) 
	{
        case 1:
            monthname = "January";
            break;
        case 2:
            monthname = "February";
            break;
        case 3:
            monthname = "March";
            break;
        case 4:
            monthname = "April";
            break;
        case 5:
            monthname = "May";
            break;
        case 6:
            monthname = "June";
            break;
        case 7:
            monthname = "July";
            break;
        case 8:
            monthname = "August";
            break;
        case 9:
            monthname = "September";
            break;
        case 10:
            monthname = "October";
            break;
        case 11:
            monthname = "November";
            break;
        case 12:
            month = "December";
            break;
    }

   
    printf("Month name for month number %d is: %s\n", month,monthname);

    return 0;
}
