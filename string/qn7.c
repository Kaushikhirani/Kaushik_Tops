#include <stdio.h>

void stringCopy(char *dest, const char *src)
 {
    while (*src)
	 {
        *dest = *src;
        src++;
        dest++;
    }
     
}

int main()
 {
    char source[] = "Hirani Kaushik";
    char destination[100]; 

    
    stringCopy(destination, source);

    
    printf("Copied: %s\n", destination);

    return 0;
}
