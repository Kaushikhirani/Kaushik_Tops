#include <stdio.h>

int main()
 {
    char alpha;

    printf("Enter a character: ");
    scanf("%c", &alpha);

    if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
	 {
        if (alpha >= 'a' && alpha <= 'z') 
		{
            printf("'%c' is a lowercase letter.\n", alpha);
        } else {
            printf("'%c' is an uppercase letter.\n", alpha);
        }
    } else if (alpha >= '0' && alpha <= '9')
	 {
        printf("'%c' is a digit.\n", alpha);
    } else {
        printf("'%c' is a special character.\n", alpha);
    }

    return 0;
}
