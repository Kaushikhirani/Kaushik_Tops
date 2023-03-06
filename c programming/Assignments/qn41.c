#include <stdio.h>

void main() {
  char str[100];
  int len = 0, i;

  // Input the string
  printf("Enter a string: ");
  scanf("%[^\n]", str);

  // Find the length of the string
  for(i=0; str[i]!='\0'; i++) {
    len++;
  }

  // Display the length of the string
  printf("The length of the string is: %d\n", len);


}
