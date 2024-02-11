#include <stdio.h>

int isPalindrome(int num)
 {
    int org = num;
    int reverse = 0;

   
    while (num > 0)
	 {
        int remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    
    if (org == reverse)
	 {
        return 1; 
    } 
	else 
	{
        return 0; 
    }
}

int main()
 {
    int number;

    
    printf("Enter a number: ");
    scanf("%d", &number);

   
    if (isPalindrome(number)) 
	{
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }

    return 0;
}
