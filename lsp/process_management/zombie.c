#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
 #include <sys/wait.h>

int main(void)
{
	int a,b;
	pid_t pid;
	pid=fork();
if(pid==0)
{
	printf("my self children my process id is %d\n",getpid());
	printf("my parent process id is %d\n",getppid());
        a=300;
	b=400;
	printf("a=%d\n",a);
	printf("b=%d",b);
}
else
{
	getchar();
	int st;
	wait(&st);
	getchar();
	printf("my self parent my process id is %d\n",getpid());
	printf("my parent process id is %d\n",getppid());
	a=350;
	b=360;
	printf("a=%d\n",a);
	printf("b=%d\n",b);

}
}
