#include <stdio.h>

int main() {
  
    int num,j;

        printf("Enter the number for the table: ");
    scanf("%d", &num);

    printf("Enter the limit for the table: ");
    scanf("%d", &j);

        printf("Table of %d up to %d:\n", num,j);
    for (int i = 1; i <= j; ++i) 
	{
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
