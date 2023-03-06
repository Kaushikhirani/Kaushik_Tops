#include <stdio.h>

void  main()
 {
    int marks[5];
    int sum = 0;
    float percentage;

    printf("Enter the marks for 5 subjects:\n");

    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    percentage = (float)sum / 5;

    printf("\nSum of marks = %d\n", sum);
    printf("Percentage = %.2f%%\n", percentage);

    
}