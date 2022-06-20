#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("\n Enter the class 10 marks:-");
	scanf("%d",&a);
	printf("\n Enter the class 12 marks:-");
	scanf("%d",&b);
	printf("\n Enter the class B.tech marks:-");
	scanf("%d",&c);
	if((a>=60) && (b>=60) || (c>=60))
	printf("\n You are elisible");
	else
	printf("\n You are not elisible");
	getch();
	}
	

