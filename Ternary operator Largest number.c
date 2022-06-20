#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,max;
	printf("\n Enter the first number:-");
	scanf("%d",&a);
	printf("\n Enter the second number:-");
	scanf("%d",&b);
	printf("\n Enter the third number:-");
	scanf("%d",&c);
	max=a>b?(a>c?a:c):(b>c?b:c);
	printf("\n Largest number is:- %d",max);
	getch();
	}

