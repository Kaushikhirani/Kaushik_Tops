#include <stdio.h>


int countWords(char str[])
 {
    int wordCount = 0;
    int i = 0;

   
    while (str[i] != '\0')
			 {
        
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
 {
            i++;
        }

        
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		  	{
            wordCount++;

           
            while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
			 {
                i++;
     }
}
  }

    return wordCount;
}

int main() {
    char inputString[1000];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    int words = countWords(inputString);
    printf("Total number of words: %d\n", words);

    return 0;
}
