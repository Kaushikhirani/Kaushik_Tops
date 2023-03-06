#include <stdio.h>

void main()
 {
  char str1[100], str2[100];
  int i;

  // Input the string to be copied
  printf("Enter a string: ");
  scanf("%[^\n]", str1);

  // Copy the string to another string
  for(i=0; str1[i]!='\0'; i++) {
    str2[i] = str1[i];
  }
  str2[i] = '\0'; // don't forget to add the null terminator

  // Display the copied string
  printf("The copied string is: %s\n", str2);

  
}
