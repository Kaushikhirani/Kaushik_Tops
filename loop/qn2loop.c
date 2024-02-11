#include <stdio.h>

int main() 
{
    int numbers[5];
    int i;

    for (i = 0; i < 5; ++i)
	 {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Entered numbers: ");
    for (i = 0; i < 5; ++i)
	 {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
