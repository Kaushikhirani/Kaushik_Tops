#include <stdio.h>


void reversePrintCharacters(char str[])
 {
    int length = 0;

    while (str[length] != '\0')
	 {
        length++;
    }

    for (int i = length - 1; i >= 0; i--)
	 {
        printf("%c ", str[i]);
    }
    printf("\n");
}

int main()
 {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);
    
    printf("Individual characters in reverse order: ");
    reversePrintCharacters(inputString);

    return 0;
}
