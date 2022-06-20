#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,even=0,odd=0;
	printf("\n Enter the 9 number:-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&a[i][j]);
		}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(a[i][j]%2==0)
				even=even+1;
				else
				odd=odd+1;
			}
		}
		printf("\n Even is:- %d",even);
		printf("\n odd is:- %d",odd);
		getch();
	}
	
	
