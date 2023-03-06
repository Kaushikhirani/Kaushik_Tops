#include<stdio.h>

void main()
{
    int choice, num1, num2;

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch(choice)
    {
        case 1:
            printf("Sum = %d\n", num1 + num2);
            break;
        case 2:
            printf("Difference = %d\n", num1 - num2);
            break;
        case 3:
            printf("Product = %d\n", num1 * num2);
            break;
        case 4:
            if(num2 == 0)
            {
                printf("Cannot divide by zero\n");
            }
            else
            {
                printf("Quotient = %d\n", num1 / num2);
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    
}