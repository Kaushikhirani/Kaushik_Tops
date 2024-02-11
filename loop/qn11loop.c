#include<stdio.h>
int main()
{
	char names [5][50];
	for (int i=0;i<5; ++i)
	{
		printf("Enter name %d: ", i+1);
		scanf("%s",names[i]);
		
	}
	printf("\nyour entered names: \n");
	for(int i=0; i<5;++i)
	{
		printf("names %d: %s\n",i+1,names[i]);
	}
	return 0;
	
}