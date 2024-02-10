#include <stdio.h>

int main() {

    char names[5][50];
    float salaries[5], totalSalary, averageSalary;

 
    printf("Enter details for 5 employees:\n");
    
    // E 1
    printf("Employee 1 Name: ");
    scanf("%s", names[0]);
    printf("Employee 1 Salary: ");
    scanf("%f", &salaries[0]);

    // E 2
    printf("Employee 2 Name: ");
    scanf("%s", names[1]);
    printf("Employee 2 Salary: ");
    scanf("%f", &salaries[1]);

    // E 3
    printf("Employee 3 Name: ");
    scanf("%s", names[2]);
    printf("Employee 3 Salary: ");
    scanf("%f", &salaries[2]);

    // E 4
    printf("Employee 4 Name: ");
    scanf("%s", names[3]);
    printf("Employee 4 Salary: ");
    scanf("%f", &salaries[3]);

    // E 5
    printf("Employee 5 Name: ");
    scanf("%s", names[4]);
    printf("Employee 5 Salary: ");
    scanf("%f", &salaries[4]);

   
    totalSalary = salaries[0] + salaries[1] + salaries[2] + salaries[3] + salaries[4];


    averageSalary = totalSalary / 5;

    
    printf("\nTotal Salary: %.2f\n", totalSalary);
    printf("Average Salary: %.2f\n", averageSalary);

    return 0;
}
