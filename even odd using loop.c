#include<stdio.h>
#include<conio.h>
void main()
{
	int i,m,n;
	printf("\n Enter the value of m:-");
	scanf("%d",&m);
	printf("\n Enter the value of n:-");
	scanf("%d",&n);
	for(i=m;i<=n;i++)
	{
		if(i%2==0)
		printf("\n Even is:- %d",i);
		else
		printf("\n Odd is:- %d",i);
		}
		getch();
		}
		
		
		
