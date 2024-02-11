#include <stdio.h>

int main()
 {
    char country[100];
    char abb[100];
    

    printf("Enter the country's name: ");
    scanf("%50[^\n]", country);
    
    
    int i, j = 0;
    for (i = 0; country[i] != '\0'; i++) 
	{
        if (i == 0) 
		{
            abb[j++] = country[i];
        } 
		else if (country[i - 1] == ' ') 
		{
            abb[j++] = country[i];
        }
    }
    
    
   
    printf("The abbreviation is: %s\n", abb);
    
    return 0;
}
