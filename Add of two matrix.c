#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("\n Enter the 9 number for a:-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			}
			}
			printf("\n Enter the 9 number for b:-");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					scanf("%d",&b[i][j]);
					}
					}
					for(i=0;i<3;i++)
					{
						for(j=0;j<3;j++)
						{
							c[i][j]=a[i][j]+b[i][j];
							}
							}
							printf("\n Addition is:-\n");
							for(i=0;i<3;i++)
							{
								for(j=0;j<3;j++)
								{
									printf("%d",c[i][j]);
									}
									printf("\n");
									}
									getch();
									}
									
							
