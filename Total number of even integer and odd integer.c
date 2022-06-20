#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,odd=0,even=0;
	printf("Enter the value of n:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		even=even+1;
		else
		odd=odd+1;
		}
		printf("The total number of odd integer:-%d",even);
		printf("The total number of even integer:-%d",even);
		getch();
		}
		
		
