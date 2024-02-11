#include <stdio.h>

int main()
 {
    char names[5][50];

    printf("Enter names of 5 students:\n");
    for (int i = 0; i < 5; i++)
	 {
        printf("Student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\nNames of students entered:\n");
    for (int i = 0; i < 5; i++)
	 {
        printf("%s\n", names[i]);
    }

    return 0;
}
