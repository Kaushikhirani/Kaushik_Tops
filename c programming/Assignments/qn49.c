#include <stdio.h>

void swap(int *ptr1, int *ptr2) {
    // Swap the values without using a third variable
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
}

void main()
 {
    int num1, num2;

    // Get the input values from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the values before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function to swap the values using pointers
    swap(&num1, &num2);

    // Display the values after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    
}
