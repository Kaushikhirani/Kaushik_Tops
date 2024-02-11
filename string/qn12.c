#include <stdio.h>
#include <string.h>

int main()
 {
    char str[100], word[] = "is";
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    for (int i = 0; i < strlen(str) - strlen(word) + 1; i++)
	 {
        int found = 1;
        
        for (int j = 0; j < strlen(word); j++)
		 {
            if (str[i + j] != word[j])
			 {
                found = 0; 
                break;
            }
        }
        
        if (found == 1)
		 {
            count++;
        }
    }

   
    printf("Number of times 'is' appears in the string: %d\n", count);

    return 0;
}
