#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	printf("\n Enter the first number:-");
	scanf("%d",&a);
	printf("\n Enter the second number:-");
	scanf("%d",&b);
	printf("\n Enter the third number:-");
	scanf("%d",&c);
	d=a;a=b;b=c;c=d;
	printf(" % d % d % d ",a,b,c);
	getch();
	}

