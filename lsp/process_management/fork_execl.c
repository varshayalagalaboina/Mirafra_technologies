#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	char *args[]={"./fork",NULL};
	int pid;
	pid=fork();
	if(pid==0)
	{
		printf("this is child process\n");
		execl("/home/varsha/lsp/lsp_pg/./fork",args[0],(char*)0);
		printf("this wont print\n");
	}
	else
	
		printf("this is parent process\n");

}

