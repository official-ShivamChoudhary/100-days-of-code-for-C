#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,num,sum=0;
	printf("\n Enter the number:-");
	scanf("%d",&num);
	while(i<num)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==num)
	printf("\n is a perfect number");
	else
	printf("\n is not a perfect number");
	getch();
	}
	
	
