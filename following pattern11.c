#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf(" ");
			}
			for(k=1;k<=i*2-1;k++)
			{
				printf("*");
				}
				printf("\n");
				}
				for(i=2;i>=1;i--)
				{
					for(j=1;j<=3-i;j++)
					{
						printf(" ");
						}
						for(k=1;k<=i*2-1;k++)
						{
							printf("*");
						}
						printf("\n");
						}
						getch();
						}
						
	
