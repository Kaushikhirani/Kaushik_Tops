#include<stdio.h>

void main()
{
    int marks[5];
    int i, total = 0;
    float percentage;

    printf("Enter marks of 5 subjects: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (float)total/5.0;

    printf("Total marks = %d\n", total);
    printf("Percentage = %.2f\n", percentage);

    if(percentage > 75.0)
    {
        printf("Distinction\n");
    }
    else if(percentage > 60.0 && percentage <= 75.0)
    {
        printf("First class\n");
    }
    else if(percentage > 50.0 && percentage <= 60.0)
    {
        printf("Second class\n");
    }
    else if(percentage > 35.0 && percentage <= 50.0)
    {
        printf("Pass class\n");
    }
    else
    {
        printf("Fail\n");
    }

    
}