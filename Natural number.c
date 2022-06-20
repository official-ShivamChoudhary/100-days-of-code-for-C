#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=0,sum=0;
	printf("Enter the limit:-");
	scanf("%d",&n);
	while(i<n)
	{
		i++;
		sum+=i;
	}
	printf("Sum of %d natural number:- % d",n,sum);
	getch();
	}
	

