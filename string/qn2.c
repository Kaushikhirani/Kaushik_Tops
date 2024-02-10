#include <stdio.h>


void separateCharacters(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        printf("%c ", str[i]);
        i++;
    }
    printf("\n");
}

int main() {
    char is[100];
    printf("Enter a string: ");
    scanf("%s", is);

    printf("Individual characters: ");
    separateCharacters(is);

    return 0;
}
