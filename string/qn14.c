#include <stdio.h>

int main()
 {
    char str1[100], str2[100], combined[200];
    int i, j;

 
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

   
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

   
    i = 0;
    while (str1[i] != '\0')
	 {
        combined[i] = str1[i];
        i++;
    }
    j = 0;
    while (str2[j] != '\0')
	 {
        combined[i] = str2[j];
        i++;
        j++;
    }
    combined[i] = '\0'; 


    printf("Combined string: %s\n", combined);

    return 0;
}
