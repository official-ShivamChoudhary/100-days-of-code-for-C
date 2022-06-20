#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	printf("Enter the value of x and y\n");
	scanf("%d%d",&x,&y);
	printf("Before swapping\n x=%d\n y=%d\n",x,y);
	swap(&x,&y);
	printf("After swapping\n x=%d\ny=%d\n",x,y);
	getch();
	}
	void swap(int *a,int *b)
	{
		int t;
		t = *b;
		*b= *a;
		*a = t;
	}
	
	

