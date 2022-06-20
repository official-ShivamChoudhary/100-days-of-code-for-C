
#include<unistd.h>
#include<stdio.h>
int main()
{
	int pid;
	p=fork();
	if (p<0)
	{
		printf("cannot be executed");
		}
		else if(p==0)
		{
			printf("child process created \n");
			}
			else if(p>0)
			{
				printf("parent process \n");
				}
				return 0;
				}
