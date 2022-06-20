#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5];
	int i,j,temp,n;
	int low,mid,high;
	char found='F';
	for(i=0;i<5;i++)
	{
		printf("\n Enter into index:-");
		scanf("%d",&arr[i]);
		}
		for(i=0;i<5-1;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(arr[i]>arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					}
					}
					}
					printf("\n You have entered:-");
					for(i=0;i<5;i++)
					printf(" % d ",arr[i]);
					printf("\n Enter the number that you want to search:-");
					scanf("%d",&n);
					low=0;
					high=5-1;
					while(low<=high)
					{
						mid=(low+high)/2;
						if(n<arr[mid])
						high=mid-1;
						else
						if(n>arr[mid])
						low=mid+1;
						else
						{
							found='T';
							printf("\n The number is found at index is:- %d",mid);
							break;
							}
							}
							if(found=='F')
							printf("\n The number is not found at index");
							getch();
							}
							
							
					
