#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	void sub(int, int);
	printf("\n Enter the first number:-");
	scanf("%d",&a);
	printf("\n Enter the second number:-");
	scanf("%d",&b);
	sub(a,b);
	getch();
}
	void sub(int a,int b)
	{
		int c;
		c=a-b;
		printf("\n Substraction is:- %d",c);
		}
		
	
