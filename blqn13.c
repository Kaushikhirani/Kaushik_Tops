#include <stdio.h>

int main()
 {
    
    int asciiCode;


    printf("Enter the ASCII code: ");
    scanf("%d", &asciiCode);


    char characterValue = (char)asciiCode;

    
    printf("Character corresponding to ASCII code %d is: %c\n", asciiCode, characterValue);

    return 0;
}
