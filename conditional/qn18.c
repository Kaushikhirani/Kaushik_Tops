#include <stdio.h>

int main() {
    float cp, sp, profit, loss;

    
    printf("Enter the cost price: ");
    scanf("%f", &cp);

    printf("Enter the selling price: ");
    scanf("%f", &sp);

    
    if (sp > cp) {
        
        profit = sp - cp;
        printf("Profit amount: %.2f\n", profit);
    } else if (cp > sp)
	 {
    
        loss = cp - sp;
        printf("Loss amount: %.2f\n", loss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
