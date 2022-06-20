#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,min=1;
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
					if(a[i][j]<min)
					min=a[i][j];
					}
					}
					printf("\n Smallest number is:- %d",min);
					getch();
					}
					
	
