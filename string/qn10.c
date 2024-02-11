#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[100];
    int start, length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the starting index of the substring: ");
    scanf("%d", &start);

    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    strncpy(sub, str + start, length);
    sub[length] = '\0'; 

    printf("Substring: %s\n", sub);

    return 0;
}
