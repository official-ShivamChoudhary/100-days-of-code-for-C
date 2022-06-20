#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,fact;
	printf("\n Enter the range:-");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		fact=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				fact=0;
				break;
			}
		}
		if(fact==1)
		{
			printf("%d",i);
			}
			printf(" ");
			}
			getch();
			}
			
		
