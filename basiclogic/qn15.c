#include <stdio.h>

int main()
 {
    char schoolname[100];
    char abb[100];
    

    printf("Enter the school's name: ");
    scanf("%50[^\n]", schoolname);
    
    
    int i, j = 0;
    for (i = 0; schoolname[i] != '\0'; i++) 
	{
        if (i == 0) 
		{
            abb[j++] = schoolname[i];
        } 
		else if (schoolname[i - 1] == ' ') 
		{
            abb[j++] = schoolname[i];
        }
    }
    
    
   
    printf("The abbreviation is: %s\n", abb);
    
    return 0;
}
