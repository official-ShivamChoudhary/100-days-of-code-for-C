#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter the value:-");
	scanf("%d",&a);
	while(a)
	{
		printf(" % d",a%10);
		a=a/10;
		}
		getch();	
		}
	
