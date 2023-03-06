#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    if (start >= end) {
        return;
    }
    // Swap the characters at the start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursively call reverse on the substring between start+1 and end-1
    reverse(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';  // remove the newline character

    // Call the reverse function to reverse the string
    reverse(str, 0, strlen(str) - 1);

    printf("Reversed string: %s\n", str);
   
}
