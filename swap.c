#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter the first number:-");
	scanf("%d",&a);
	printf("\n Enter the second number:-");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\n Swap is:- %d %d",a,b);
	getch();
	}
	

