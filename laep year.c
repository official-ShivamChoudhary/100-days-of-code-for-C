#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("\n Enter the year:-");
	scanf("%d",&year);
	if((year%4==0) && (year%100!=0) || (year%400==0))
	printf("\n %d is a Leap Year",year);
	else
	printf("\n %d is not a leap year",year);
	getch();
	}
	

