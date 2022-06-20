#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	void div(int, int);
	printf("\n Enter the first number:-");
	scanf("%d",&a);
	printf("\n Enter the second number:-");
	scanf("%d",&b);
	div(a,b);
	getch();
}
	void div(int a,int b)
	{
		int c;
		c=a/b;
		printf("\n Division is:- %d",c);
		}
		
	
