#include<stdio.h>
int main()
{
	int num, firstdigit, lastdigit, originalnum,sum;
	printf("Enter a num: ");
	scanf("%d",&num);
	originalnum = num;
	while(num>=10)
	{
		num = 10;
	}
	firstdigit = num;
	lastdigit = originalnum % 10;
	 sum = firstdigit + lastdigit;
	printf("sum of 1st and last num: %d\n",sum);
	
	return 0;
}