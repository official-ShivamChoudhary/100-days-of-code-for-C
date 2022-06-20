#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n=5;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
			if((i==0 && j==0) || (i==j-1 && j==(n+1)) || (i>0 && i==j-1))
			printf("$");
			else if(i==0 || i==(n-1) || j==0 || j==(n))
			printf("*");
			else
			printf(" ");
			}
			printf("\n");
			}
			getch();
			}
			
