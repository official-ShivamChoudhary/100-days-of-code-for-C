#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,t;
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
					t=a[i][j];
					a[i][j]=a[j][i];
					a[j][i]=t;
					}
					}
					printf("\n Transpose is:-\n");
                    for(i=0;i<3;i++)
					{
						for(j=0;j<3;j++)
						{
							printf("% d",a[i][j]);
							}
							printf("\n");
							}
							getch();
							}
							
					
