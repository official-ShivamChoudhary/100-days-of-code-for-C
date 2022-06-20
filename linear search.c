#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10];
	int i,n;
	char found='F';
	for(i=0;i<5;i++)
	{
		printf("\n Enter into index:-");
		scanf("%d",&arr[i]);
		}
		printf("\n Display you have entered:-");
		for(i=0;i<5;i++)
		{
			printf(" % d",arr[i]);
			}
			printf("\n Enter the number that you want to search:- ");
			scanf("%d",&n);
			for(i=0;i<5;i++)
			{
				if(arr[i]==n)
				{
					found='T';
					printf("\n The number is found at index is:- % d",i);
					break;
					}
					}
					if(found=='F')
					printf("\n The number is not found at index:-");
					getch();
					}
					
		
