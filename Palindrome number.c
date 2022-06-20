#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,r,rev=0;
	printf("\n Enter the number:-");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		{
			n=n/10;
		}
	}
	if(a==rev)
	printf("\n is a Palindrome number");
	else
	printf("\n is not a palindrome number");
	getch();
	}
	

