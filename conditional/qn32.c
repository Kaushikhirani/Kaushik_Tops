#include <stdio.h>

int main() 
{
    float basicsalary, grosssalary, hra, da;

    
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicsalary);

   
    if (basicsalary <= 10000)
	 {
        hra = 0.20 * basicsalary;
        da = 0.80 * basicsalary;
    }
	 else if (basicsalary <= 20000)
	 {
        hra = 0.25 * basicsalary;
        da = 0.90 * basicsalary;
    }
	 else 
	 {
        hra = 0.30 * basicsalary;
        da = 0.95 * basicsalary;
    }

   
    grosssalary = basicsalary + hra + da;

    
    printf("Gross salary of the employee: %.2f\n", grosssalary);

    return 0;
}
