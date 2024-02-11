#include <stdio.h>

void countCharacters(char str[])
 {
    int alphabets = 0, digits = 0, specials = 0;
    int i = 0;

   
    while (str[i] != '\0') 
	{
      
if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            alphabets++;
        }
       
       else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        
      else
	   {
            specials++;
        }

    i++;
    }

    
    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specials);
}

int main() {
    char inputString[1000];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    countCharacters(inputString);

    return 0;
}
