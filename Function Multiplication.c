#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	void mul(int, int);
	printf("\n Enter the first number:-");
	scanf("%d",&a);
	printf("\n Enter the second number:-");
	scanf("%d",&b);
	mul(a,b);
	getch();
}
	void mul(int a,int b)
	{
		int c;
		c=a*b;
		printf("\n Multiplication is:- %d",c);
		}
		
	
