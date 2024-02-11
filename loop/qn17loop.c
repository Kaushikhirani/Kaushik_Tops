#include <stdio.h>

int main() {
    int count = 1;
    int number;    
    int evenCount = 0, oddCount = 0; 

    
    while (count <= 5) {
        printf("Enter number %d: ", count);
        scanf("%d", &number);

        if (number % 2 == 0) {
            evenCount++; 
        } else {
            oddCount++; 
        }

        ++count; 
    }

    
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}
