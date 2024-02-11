
#include <stdio.h>

int main()
 {
    int numbers[10];
    int evenCount = 0, oddCount = 0, sumEven = 0, sumOdd = 0;

    
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);

       
        if (numbers[i] % 2 == 0) 
		{
            evenCount++;
            sumEven += numbers[i];
        } else
		 {
            oddCount++;
            sumOdd += numbers[i];
        }
    }
    
    printf("a. Number of even numbers: %d\n", evenCount);
    printf("b. Number of odd numbers: %d\n", oddCount);
    printf("c. Sum of even numbers: %d\n", sumEven);
    printf("d. Sum of odd numbers: %d\n", sumOdd);

  
    

    return 0;
}