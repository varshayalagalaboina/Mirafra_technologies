#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	char *args[]={" ",NULL};
	int pid;
	pid=fork();
	if(pid==0)
	{
		printf("this is child process\n");
		execlp("./fork",args[0],(char*)0);
		printf("this won't print\n");
	}
	else
	
		printf("this is parent process\n");

}

