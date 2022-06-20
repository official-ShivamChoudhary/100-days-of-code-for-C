#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("\n Enter any character:-");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	printf("\n The enter character was in upper case . In lower case it is:-%c",(ch+32));
	else
	printf("\n The enter character was in lower case . In upper case it is:-%c",(ch-32));
	getch();
}

