#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,f;
	f=i=1;
	printf("Enter a number:-");
	scanf("%d",&n);
	do
	{
		f*=i;
		i++;
	}
	while(i<=n);
	printf("Factorial of %d %d",n,f);
	getch();
	}
	

