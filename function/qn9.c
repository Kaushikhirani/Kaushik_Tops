#include <stdio.h>

struct Employee
 {
    int empno;
    char empname[50];
    char address[100];
    int age;
};


void printEmployeeInfo(struct Employee emp)
 {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    // Single employee
    struct Employee emp1;

    printf("Enter employee details:\n");
    printf("Employee Number: ");
    scanf("%d", &emp1.empno);
    printf("Employee Name: ");
    scanf("%s", emp1.empname);
    printf("Address: ");
    scanf("%s", emp1.address);
    printf("Age: ");
    scanf("%d", &emp1.age);

    printf("Information of Employee:\n");
    printEmployeeInfo(emp1);
    
    struct Employee employees[5];

    printf("\nEnter details for five employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nDetails for Employee %d:\n", i + 1);
         printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name: ");
         scanf("%s", employees[i].empname);
        printf("Address: ");
        scanf("%s", employees[i].address);
        printf("Age: ");
       scanf("%d", &employees[i].age);
     }

    printf("\nInformation of five Employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nDetails for Employee %d:\n", i + 1);
        printEmployeeInfo(employees[i]);
    }

    return 0;
}
