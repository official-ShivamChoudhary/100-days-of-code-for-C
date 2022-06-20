#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=1;
	int x=1;
	for(i=1;i<=3;i++)
	{
		for(j=2;j<=x;j++)
		printf(" ");
		for(j=k;j>=1;j--)
		printf(" % d",j);
		for(j=2;j<=k;j++)
		printf(" % d",j);
		printf("\n");
		k++;
		x--;
		}
		getch();
		}

