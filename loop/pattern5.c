#include <stdio.h>

int main()
 {
    int rows = 5;
    int count = 1;


    for (int i = 1; i <= rows; i++)
	 {
        
        for (int j = 1; j <= i; j++)
		 {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}
