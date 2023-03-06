#include<stdio.h>


void main()
{

int num,square,cube;
printf("Enter a number: ");
scanf("%d",&num);
square = num* num;
cube= num * num * num;
printf("The suare of %d is %d\n",num,square);
printf("The cube of %d is %d\n",num,cube);
}