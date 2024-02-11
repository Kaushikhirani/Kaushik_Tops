#include <stdio.h>

int main()
{
    float pr, rate, time, ci;
    
    printf("Enter principal amount: ");
    scanf("%f", &pr);
    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    
    rate = rate / 100;
    
    ci = pr;
    for (int i = 0; i < time; i++) {
        ci = ci + (ci * rate);
    }
    
    printf("Compound interest: %.2f\n", ci - pr);
    
    return 0;
}
