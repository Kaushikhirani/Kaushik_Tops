#include <stdio.h>

int main() 
{

    float ex1, ex2, ex3, ex4, ex5, total, average;

    printf("Enter expense 1: ");
    scanf("%f", &ex1);

    printf("Enter expense 2: ");
    scanf("%f", &ex2);

    printf("Enter expense 3: ");
    scanf("%f", &ex3);

    printf("Enter expense 4: ");
    scanf("%f", &ex4);

    printf("Enter expense 5: ");
    scanf("%f", &ex5);

    
    total = ex1 + ex2 + ex3 + ex4 + ex5;
    average = total / 5;

 
    printf("Total expenses: %.2f\n", total);
    printf("Average expense: %.2f\n", average);

    return 0;
}
