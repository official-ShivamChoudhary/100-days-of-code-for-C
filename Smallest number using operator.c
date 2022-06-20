#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("\n Enter the first number:-");
	scanf("%d",&a);
	printf("\n Enter the second number:-");
	scanf("%d",&b);
	printf("\n Enter the third  number:-");
	scanf("%d",&c);
	if(a<b && a<c)
	printf("\n Smallest number is:- %d",a);
	if(b<a && b<c)
	printf("\n Smallest number is:- %d",b);
	else
	printf("\n Smallest number is:- %d",c);
	getch();
	}
