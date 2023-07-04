#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(void)
{
	int a = 240;
	int b = 300;
	pid_t pid;
	pid=fork();
if(pid==0)
{
//	sleep(1);
	printf("myself children my process id %d\n",getpid());
	printf("children parent process id %d\n",getppid());
	 a=200;
	 b=340;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
else
{
	sleep(1);
	printf("myself parent my process id %d\n",getpid());
	printf(	"parent parent's process id %d\n",getppid());
//	 a=230;
//	 b=330;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
//	printf("a=%d\n",a);
//	printf("b=%d\n",b);

}
