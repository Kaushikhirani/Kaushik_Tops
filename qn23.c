#include <stdio.h>

int main() 
{
   
    int num1, num2;
  
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;

    printf("After swapping using multiplication and division:\n");
    printf("1st number: %d\n", num1);
    printf("2nd number: %d\n", num2);

    return 0;
}
