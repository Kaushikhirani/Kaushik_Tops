#include <stdio.h>
#include <string.h>

void main()
 {
    char str1[100], str2[100];
    char *ptr1, *ptr2;

    // Get the input strings from the user
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Assign the addresses of the input strings to the pointers
    ptr1 = str1;
    ptr2 = str2;

    // Move the pointer to the end of the first string
    while (*ptr1 != '\0') {
        ptr1++;
    }

    // Copy the second string to the end of the first string using pointers
    while (*ptr2 != '\0') {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }

    // Add the null character to the end of the concatenated string
    *ptr1 = '\0';

    // Display the concatenated string
    printf("The concatenated string is: %s\n", str1);

    
}
