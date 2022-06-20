#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	int op;
	printf("Enter the values of a:-");
	scanf("%d",&a);
	printf("Enter the values of b:-");
	scanf("%d",&b);
	printf("1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n");
	printf("Enter your choice:-");
	scanf("%d",&op);
	switch (op)
	{
		case 1:
			printf("Sum is % d and % d = % d",a,b,a+b);
			break;
			case 2:
			printf("Substraction of % d and % d=% d",a,b,a-b);
			break;
			case 3:
			printf("Multiplication of % d and % d=% d",a,b,a*b);
			break;
			case 4:
			printf("Division of %d and % d=% d",a,b,a/b);
			break;
			default:
			printf("Enter your correct choice");
			break;
			}
			getch();
			}
			
		
