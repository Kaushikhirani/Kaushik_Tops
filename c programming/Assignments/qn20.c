#include<stdio.h>

void main()
{
    int n, i, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", n, factorial);

  
}