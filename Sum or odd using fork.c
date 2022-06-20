#include<stdio.h>
#include<unistd.h>
int main()
{
	int a[10] = { 11, 23, 13, 74, 35, 6, 17, 81, 29, 10 };
	int sumOdd = 0, sumEven = 0, n, i;
	n = fork();
	if (n > 0)
	sleep(5);
	for(i = 0; i < 10; i++)
	{
		if (a[i] % 2 == 0)
		sumEven = sumEven + a[i];
		}
		printf("Parent process \n");
		printf("Sum of even no. is %d\n",sumEven);
	}
        else 
		{
		
			sleep(3);
			for(i = 0; i < 10; i++)
			{
				if (a[i] % 2 != 0)
				sumOdd = sumOdd + a[i];
				}
				printf("Child Process \n");
				printf("Sum of odd no. is %d\n",sumOdd);
				
				return 0;
				}
				
			
