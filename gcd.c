#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,i,gcd;
	printf("Enter the first number:-");
	scanf("%d",&x);
	printf("Enter the second number:-");
	scanf("%d",&y);
	for(i=1;i<=x && i<=y;i++)
	{
	if(x%i==0 && y%i==0)
	gcd=i;
	}
	printf("GCD is:- %d",gcd);
	getch();
	}
	
	
