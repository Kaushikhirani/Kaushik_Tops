#include <stdio.h>

float calculateInsurancePremium(float salary)
 {
    
    const float premiumRate = 0.05;

   
    float premium = salary * premiumRate;

    return premium;
}

int main()
 {

    float salary, premium;

    printf("Enter the person's salary: ");
    scanf("%f", &salary);
  
    premium = calculateInsurancePremium(salary);

    printf("Insurance premium based on salary: %.2f\n", premium);

    return 0;
}
