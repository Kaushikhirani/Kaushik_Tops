#include <stdio.h>

int main() 
{
    float original_bill, total_bill;

    
    printf("Enter the original bill amount: ");
    scanf("%f", &original_bill);

    
    if (original_bill > 800)
	 {
        
        
        
        total_bill = original_bill + (original_bill * 0.18);
    } else {
        total_bill = original_bill;
    }

    
    
    
    if (total_bill < 256)
	 {
        total_bill = 256;
    }

    printf("Total bill amount: %.2f\n", total_bill);

    return 0;
}
