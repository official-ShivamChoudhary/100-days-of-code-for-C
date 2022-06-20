#include<stdio.h>
#include<conio.h>
void main()
{
	int unit,charge;
	printf("\n Enter the unit:-");
	scanf("%d",&unit);
	if(unit<=100)
	charge=3*unit+50;
	if(unit<=200)
	charge=4*unit+50;
	if(unit<=300)
	charge=6*unit+50;
	printf("\n charge is:- %d",charge);
	getch();
	}
	
	
