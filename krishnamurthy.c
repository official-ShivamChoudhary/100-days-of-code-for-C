#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,i,temp,fact,sum=0;
	printf("Enter any number:-");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		fact=1;
		for(i=rem;i>=1;i--)
		fact=fact*i;
		sum=sum+fact;
		n=n/10;
		}
		if(sum==temp)
		printf(" Its a krishnamurthy number");
		else
		printf("Its is not a krishnamurthy number");
		getch();
		}
		
		
