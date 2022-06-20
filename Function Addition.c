#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	void add(int, int);
	printf("\n Enter the first number:-");
	scanf("%d",&a);
	printf("\n Enter the second number:-");
	scanf("%d",&b);
	add(a,b);
	getch();
}
	void add(int a,int b)
	{
		int c;
		c=a+b;
		printf("\n The sum is:- %d",c);
		}
		
	
