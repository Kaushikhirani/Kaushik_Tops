#include <stdio.h>

void main()
 {
  char str[100];
  int i, word_count = 1; // assume the first word starts at index 0

  // Input the string
  printf("Enter a string: ");
  scanf("%[^\n]", str);

  // Count the number of words in the string
  for(i=0; str[i]!='\0'; i++) {
    if(str[i] == ' ') {
      word_count++;
    }
  }

  // Display the number of words in the string
  printf("The total number of words in the string is: %d\n", word_count);

 
}
