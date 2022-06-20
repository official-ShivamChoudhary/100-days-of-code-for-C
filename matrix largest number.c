#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,max;
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
					if(a[i][j]>max)
					max=a[i][j];
					}
					}
					printf("\n Largest number is:- %d",max);
					getch();
					}
					
	
