#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,min;
	printf("\n Enter the first number:-");
	scanf("%d",&a);
	printf("\n Enter the second number:-");
	scanf("%d",&b);
	printf("\n Enter the third number:-");
	scanf("%d",&c);
	min=a;
	if(b<min)
	min=b;
	if(c<min)
	min=c;
	printf("\n Smallest is:- %d",min);
	getch();
	}
	
	
