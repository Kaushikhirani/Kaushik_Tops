#include <stdio.h>

int main() {
    float operands[100]; 
    char operator;
    float result;

    printf("Enter the first operand: ");
    scanf("%f", &operands[0]);

    printf("Enter the second operand: ");
    scanf("%f", &operands[1]);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) 
	{
        case '+':
            result = operands[0] + operands[1];
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = operands[0] - operands[1];
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = operands[0] * operands[1];
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (operands[1] != 0)
			 {
                result = operands[0] / operands[1];
                printf("Result: %.2f\n", result);
            } else {
                printf("cannot devide by zero.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
