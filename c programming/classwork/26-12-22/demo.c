#include<stdio.h>

void main()
{

int Num1,Num2;
 printf("\nEnter number1=");
 scanf("%d",&Num1);
 printf("\nEnter number2=");
 scanf("%d",&Num2);
 printf("Num1=%d \nNum2=%d",Num1,Num2);
  	printf("\n Addition:%d",(Num1+Num2));
  	printf("\n Subtraction:%d",(Num1-Num2));
  	printf("\n multiplication:%d",(Num1*Num2));
  	printf("\n Division:%.2f",((float)Num1/Num2));
}