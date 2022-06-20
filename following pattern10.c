#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		k=64;
		for(j=1;j<=6;j++)
		{
			if(j>i)
			printf("%c",k-1+j);
			else
			printf(" ");
			}
			printf("\n");
			}
			getch();
			}
			
			
