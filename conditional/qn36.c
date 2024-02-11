#include <stdio.h>

int main()
 {
    float Charges,Bill;
    float surcharge = 0.20;

   
    printf("Enter electricity unit charges: ");
    scanf("%f", &Charges);

    
    if (Charges <= 50)
	 {
        Bill = Charges * 0.50;
    } 
	else if (Charges <= 150)
	 {
        Bill = 25 + (Charges - 50) * 0.75;
    }
	 else if (Charges <= 250) 
	{
        Bill = 100 + (Charges - 150) * 1.20;
    }
	 else
	 {
        Bill = 220 + (Charges - 250) * 1.50;
    }

    
    Bill += Bill * surcharge;

  
    printf("Total electricity bill: %.2f\n",Bill);

    return 0;
}
