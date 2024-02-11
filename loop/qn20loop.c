#include <stdio.h>

int main() {
    int rows = 5; 
    int cols = 10; 
    int count = 1;
	int i=1; 

    
    for (int i=1;i <= rows; ++i)
	 {
        for (int j = 1; j <= cols; ++j) {
            printf("%02d ", count);
            ++count;
        }
        printf("\n");
    }

    return 0;
}
