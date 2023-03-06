#include <stdio.h>

void main() {
  char str1[100], str2[100];
  int i, j, len1 = 0;

  // Input the first string
  printf("Enter the first string: ");
  scanf("%[^\n]", str1);

  // Find the length of the first string
  for(i=0; str1[i]!='\0'; i++) {
    len1++;
  }

  // Input the second string
  printf("Enter the second string: ");
  scanf(" %[^\n]", str2);

  // Concatenate the second string to the first string
  for(i=len1, j=0; str2[j]!='\0'; i++, j++) {
    str1[i] = str2[j];
  }
  str1[i] = '\0'; // don't forget to add the null terminator

  // Display the concatenated string
  printf("The concatenated string is: %s\n", str1);

  
}
