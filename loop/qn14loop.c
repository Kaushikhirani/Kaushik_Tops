
#include<stdio.h>
int main()
{
	int f=1,num,i;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	for( i=1;i<=num;i++)
	{
		f*i;
	}
	printf("the factorial is : %d\n",f);
	return 0;
}