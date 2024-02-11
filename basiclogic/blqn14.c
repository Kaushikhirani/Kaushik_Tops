#include <stdio.h>

int main()
 {
    
    char userInput;

    
    printf("Enter a character: ");
    scanf(" %c", &userInput);

    int asciiValue = (int)userInput;

    printf("ASCII value of '%c' is: %d\n", userInput, asciiValue);

    return 0;
}
