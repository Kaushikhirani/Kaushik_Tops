#include <stdio.h>

void main() {
  char str[100], rev_str[100];
  int i, j, len = 0, is_palindrome = 1;

  // Input the string
  printf("Enter a string: ");
  scanf("%[^\n]", str);

  // Find the length of the string
  for(i=0; str[i]!='\0'; i++) {
    len++;
  }

  // Reverse the string
  for(i=len-1, j=0; i>=0; i--, j++) {
    rev_str[j] = str[i];
  }
  rev_str[j] = '\0'; // don't forget to add the null terminator

  // Check if the string is a palindrome
  for(i=0; i<len; i++) {
    if(str[i] != rev_str[i]) {
      is_palindrome = 0;
      break;
    }
  }

  // Display the reversed string and whether it is a palindrome or not
  printf("The reversed string is: %s\n", rev_str);
  if(is_palindrome) {
    printf("The original string is a palindrome.\n");
  } else {
    printf("The original string is not a palindrome.\n");
  }


}
