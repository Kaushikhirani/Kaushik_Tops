#include <stdio.h>

int main()
 {
   
    int numberOfStudents;
    int applesPerStudent = 5;
    int totalApples;

    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);

    totalApples = numberOfStudents * applesPerStudent;

    printf("Total apples required: %d\n", totalApples);

    return 0;
}
