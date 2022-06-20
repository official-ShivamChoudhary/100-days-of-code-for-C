#include<stdio.h>
#include<conio.h>
void main()
{
	char name[]="SHIVAM KUMAR";
	int i=0,test;
	while(name[i]!='\0')
	{
	test=name[i];
	if(test>=65 && test<=90)
	{
	name[i]=test+32;
	}
	i++;
	}
	i=0;
	while(name[i]!='\0')
	{
	printf("%c",name[i]);
	i++;
	}
	getch();
	}
	

