#include <stdio.h>


int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0, remainder;

    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return (originalNum == reversedNum);
}

int main() {
    int count = 1; 
    int number;  

    
    while (count <= 3) {
        printf("Enter number %d: ", count);
        scanf("%d", &number);

        if (isPalindrome(number)) {
            printf("%d is a palindrome.\n", number);
        } else {
            printf("%d is not a palindrome.\n", number);
        }

        ++count;
    }

    return 0;
}
