#include <stdio.h>

int main() 
{
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum: %d\n", sum);

    if (sum >= -32768 && sum <= 32767) {
        printf("Size of the sum is within the range of a short int.\n");
    } else {
        printf("Size of the sum exceeds the range of a short int.\n");
    }

    return 0;
}
