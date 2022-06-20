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
	max=a;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	printf("\n Largest is:- %d",max);
	getch();
	}
	
	
