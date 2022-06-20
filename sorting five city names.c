#include<stdio.h>
#include<conio.h>
void main()
{
	char city[5][20];
	int i,j;
	printf("Enter the names of cities:-\n\n");
	for(i=0;i<5;i++)
	scanf("%s",&city[i]);
	printf("sorted list of cities..\n\n");
	for(i=65;i<122;i++)
	{
		for(j=0;j<5;j++)
		{
			if(city[j][0]==i)
			printf("\n%s",city[j]);
			}
			}
			getch();
			}
	
