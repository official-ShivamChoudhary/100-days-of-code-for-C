#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,even=0,odd=0;
	printf("Enter any integer:-");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		even=even+i;
		else
		odd=odd+i;
	}
	printf("Sum of even integer is:- %d",even);
	printf("\n");
	printf("Sum of odd integer is:- %d",odd);
	getch();
	}
	
	
