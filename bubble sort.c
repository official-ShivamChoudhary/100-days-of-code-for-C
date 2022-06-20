#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5];
	int i,j,temp;
	for(i=0;i<5;i++)
	{
		printf("\n Enter into index:-");
		scanf("%d",&arr[i]);
		}
		printf("\n display you have entered:-");
		for(i=0;i<5;i++)
		{
			printf(" % d",arr[i]);
			}
			printf("\n display result after sorting:-");
			for(i=0;i<5-1;i++)
			{
				for(i=0;i<5-1;i++)
				{
				if(arr[i]>arr[i]);
						{
							temp=arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
							}
							}
							}
							for(i=0;i<5;i++)
							{
								printf(" % d",arr[i]);
							}
							getch();
                             }
								
							
