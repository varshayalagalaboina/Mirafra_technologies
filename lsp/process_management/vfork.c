#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int x=100;
	pid_t pid;
	pid=vfork();
	if (pid==0)
	{
		printf("Child process id : %d \n", getpid());
		printf("Child's Parent process id : %d\n",getppid());
		x=5;
		exit(0);
	}  
	else
	{
		printf("Parent process id: %d \n",getpid());
		printf("Parent's parent id: %d\n",getppid());
		printf("x=%d\n",x);
	}

}
