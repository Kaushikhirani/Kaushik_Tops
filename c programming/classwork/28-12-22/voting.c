#include<stdio.h>

void main()
{
	int age;
	printf("\nEnter your age :");
	scanf("\n%d",&age);
	if(age>=18)
	{
		printf("\nYou are eligible to vote ");
		
	}
	else
	{
		printf("\n You are not eligible to vote");
	}
}