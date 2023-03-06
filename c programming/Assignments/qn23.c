#include<stdio.h>

void main()
{
    int n, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    printf("The number in reverse order is %d\n", reverse);

    
}