#include<stdio.h>

void main()
{
	
	int a,b;
	printf("\nEnter value A= ");
	scanf("%d",&a);
	printf("\nEnter value B= ");
	scanf("%d",&b);
	printf("A=%d B=%d",a,b);
	if(a>b)
	{
		printf("\n%d is greater than b",a);
	}
	else
	{
		printf("\n%d is not greater than b",a);
	}
}