#include <stdio.h>

int main()
 {
    int num[5];
    int sum = 0;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
	 {
        printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
    }


    for (int i = 0; i < 5; i++)
	 {
        sum += num[i];
    }

    
    printf("\nSum of the numbers in the array: %d\n", sum);

    return 0;
}
