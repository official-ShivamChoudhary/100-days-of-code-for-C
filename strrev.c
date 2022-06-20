#include<stdio.h>
#include<conio.h>
void main()
{
	char name[]="Shivam kumar";
	char rev;
	int l=0,i=0;
	while(name[l])
	{
		l++;
	}
	while(i<l/2)
	{
		rev=name[i];
		name[i]=name[l-1-i];
		name[l-1-i]=rev;
		i++;
		}
		printf("Reverse is:- %s",name);
		getch();
		}
		
		
