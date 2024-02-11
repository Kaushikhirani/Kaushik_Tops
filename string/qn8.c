#include <stdio.h>


int isVowel(char ch)
 {
    ch = tolower(ch); 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}


int countVowelsConsonants(char *str, int countVowel)
 {
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i] != '\0'; i++)
	 {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		 {
            if (isVowel(str[i]))
			 {
                vowels++;
            }
			 else
			 {
                consonants++;
            }
        }
    }
    return (countVowel) ? vowels : consonants;
}

int main() 
{
    char str[100];

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    int vowels = countVowelsConsonants(str, 1);
    printf("Total number of vowels in the string: %d\n", vowels);


    int consonants = countVowelsConsonants(str, 0);
    printf("Total number of consonants in the string: %d\n", consonants);

    return 0;
}
