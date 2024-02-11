
#include <stdio.h>
#include <string.h>

int main() 
{
   char string[100], rev[100];

   printf("Enter a string: ");
   gets(string);

   strcpy(rev, string);
   strrev(rev);

   if(strcmp(string, rev) == 0)
      printf("%s is a palindrome string.\n", string);
   else
      printf("%s is not a palindrome string.\n", string);

   return 0;
}
