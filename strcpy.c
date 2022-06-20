#include<stdio.h>
#include<conio.h>
void main()
{
	char name[]="SHIVAM KUMAR";
	char cpyname[15];
	int i=0;
	while(name[i]!='\0')
	{
	cpyname[i]=name[i];
	i++;
	}
	i=0;
	while(name[i]!='\0')
	{
	printf("%c",cpyname[i]);
	i++;
	}
	getch();
	}
	

