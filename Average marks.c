#include<stdio.h>
#include<conio.h>
void main()
{
	int phy,che,math,eng,comp,avg,total;
	printf("\n Enter the physics marks:-");
	scanf("%d",&phy);
	printf("\n Enter the chemistry marks:-");
	scanf("%d",&che);
	printf("\n Enter the mathematics marks:-");
	scanf("%d",&math);
	printf("\n Enter the English marks:-");
	scanf("%d",&eng);
	printf("\n Enter the computer marks:-");
	scanf("%d",&comp);
	avg=(phy+che+math+eng+comp)/5;
	total=phy+che+math+eng+comp;
	printf("\n Average is:- %d",avg);
	printf("\n Total is:- %d",total);
	getch();
	}
	

