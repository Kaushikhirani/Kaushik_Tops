#include <stdio.h>
#include <string.h>

// Define the Employee structure
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void  main()
 {
    // Declare an Employee variable
    struct Employee emp;

    // Prompt the user to enter employee information
    printf("Enter employee number: ");
    scanf("%d", &emp.empno);
    printf("Enter employee name: ");
    scanf("%d", emp.empname);
    printf("Enter employee address: ");
    scanf("%d", emp.address);
    printf("Enter employee age: ");
    scanf("%d", &emp.age);

    // Display the employee information
    printf("\nEmployee Number: %d\n", emp.empno);
    printf("Employee Name: %d\n", emp.empname);
    printf("Employee Address: %d\n", emp.address);
    printf("Employee Age: %d\n", emp.age);

    
}
