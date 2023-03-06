#include <stdio.h>

void main()
 {
    int num1, num2;
    int *ptr1, *ptr2, sum;

    // Get the input values from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Assign the addresses of the input values to the pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Add the values using pointers
    sum = *ptr1 + *ptr2;

    // Display the sum
    printf("The sum of %d and %d is %d\n", *ptr1, *ptr2, sum);

   
}
