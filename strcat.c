#include<stdio.h>
#include<conio.h>
void main()
{
	char name[]="Shivam";
	char title[]="Kumar";
	int i=0,j=0;
	while(name[i]!='\0')
	{
		i++;
	}
	while(title[j]!='\0')
	{
		j++;
	}
	if(i>j)
	printf("First string are greater than second string:- 1");
	else if(i<j)
	printf("First string is less than second string:-1");
	else
	printf("Two string are equal: 0");
	getch();
	}
	

