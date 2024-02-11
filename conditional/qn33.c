#include <stdio.h>

int main()
 {
    int num;

    
    printf("Enter the week number (1-7): ");
    scanf("%d", &num);

   
    if (num < 1 || num > 7)
	 {
        printf("Invalid week number!\n");
        return 1;
    }

    
    char *weekday;
    switch(num)
	 {
        case 1:
            weekday = "Monday";
            break;
        case 2:
            weekday = "Tuesday";
            break;
        case 3:
            weekday = "Wednesday";
            break;
        case 4:
            weekday = "Thursday";
            break;
        case 5:
            weekday = "Friday";
            break;
        case 6:
            weekday = "Saturday";
            break;
        case 7:
            weekday = "Sunday";
            break;
    }


    printf("Weekday for week number %d is: %s\n", num, weekday);

    return 0;
}
