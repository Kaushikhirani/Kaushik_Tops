#include <stdio.h>

float calculateAnnualSalary(float monthlySalary)
 {
    
    const int monthsInYear = 12;

    
    float annualSalary = monthlySalary * monthsInYear;

    return annualSalary;
}

int main()
 {
    
    float monthlySalary, annualSalary;

    
    printf("Enter the person's monthly salary: rs");
    scanf("%f", &monthlySalary);

   
    annualSalary = calculateAnnualSalary(monthlySalary);

    
    printf("Annual salary: rs%.2f\n", annualSalary);

    return 0;
}
