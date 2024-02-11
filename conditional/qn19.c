#include <stdio.h>

int main()
 {
    int customerid, units;
    char customername[50];

    
    printf("Enter customer ID: ");
    scanf("%d", &customerid);
    
    printf("Enter customer name: ");
    scanf("%s", customername);
    
    printf("Enter units consumed: ");
    scanf("%d", &units);

    
    float chargeperunit, totalamount;

    if (units <= 350)
	 {
        chargeperunit = 1.20;
    } else if (units < 600) 
	{
        chargeperunit = 1.50;
    } else if (units < 800) 
	{
        chargeperunit = 1.80;
    } else
	 {
        chargeperunit = 2.00;
    }

    totalamount = units * chargeperunit;
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerid);
    printf("Customer Name: %s\n", customername);
    printf("Units Consumed: %d\n", units);
    printf("Charge per unit: %.2f\n", chargeperunit);
    printf("Total Amount to be paid: %.2f\n", totalamount);

    return 0;
}
