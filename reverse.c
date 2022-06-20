#include<stdio.h>
#include<conio.h>
void main()
{
	int a,rev;
	printf("\n Enter the Number:-");
	scanf("%d",&a);
	printf("\n The Reverse number is:-");
	while(a!=0)
	{
		rev=a%10;
		printf(" % d",rev);
		a=a/10;
		}
		getch();
		}
		
	
