#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	pid_t pid = -1;
	pid=fork();
	if(pid==0)
	{
	//	sleep(10);
		printf("my self children my process id is %d\n",getpid());
		printf("my parent process id is %d\n",getppid());
	}
	else
	{
		int st;
		wait(&st);
		printf("my self parent my process id is %d\n", getpid());
		printf("my parent process id is %d\n",getppid());
	}
}


