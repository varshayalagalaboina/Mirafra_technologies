//int execvp(const char *file, char *const argv[]);

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	char *args[]={NULL};
	int pid;
	pid=fork();
	if(pid==0)
	{
		printf("this is child process\n");
		execvp("./fork",args);
		printf("this won't print\n");
	}
	else
	
		printf("this is parent process\n");

}


