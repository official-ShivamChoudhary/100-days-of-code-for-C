#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,f=1;
	printf("Enter the number to find its factorial:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf(" % d is the factorial of % d",f,n);
	}
	
