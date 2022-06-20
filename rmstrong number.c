#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,r,result=0;
	printf("\n Enter the number:-");
	scanf("%d",&n);
	a=n;
	while(a!=0)
	{
		r=a%10;
		result=result+(r*r*r);
		{
			a=a/10;
		}
	}
	if(result==n)
	printf("\n is an armstrong number");
	else
	printf("\n is not an armstrong number");
	getch();
	}
	
	
