#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	int a,b,c;
	float s,area;
	printf("Enter the value of a:-");
	scanf("%d",&a);
	printf("Enter the value of b:-");
	scanf("%d",&b);
	printf("Enter the value of c:-");
	scanf("%d",&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf(" The area of a triangle is:- %f",area);
	getch();
	}
	
