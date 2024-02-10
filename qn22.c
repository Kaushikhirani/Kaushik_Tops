#include <stdio.h>

int main()
 {
   
    float pr, rate, time, amount, ci;

  
    printf("Enter principal amount: ");
    scanf("%f", &pr);

    printf("Enter annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

 
    amount = pr * (1 + rate / 100 * time);

    
    ci = amount - pr;

    
    printf("Principal Amount: %.2f\n", pr);
    printf("Annual Interest Rate: %.2f%%\n", rate);
    printf("Time (in years): %.2f\n", time);
    printf("Amount: %.2f\n", amount);
    printf("Compound Interest: %.2f\n", ci);

    return 0;
}
