//int execle(const char *pathname, const char *arg, ...
    //                   /*, (char *) NULL, char *const envp[] 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	char *args[]={"./zombie",NULL};
	char *const envp[]={"MIARAFRATECHNOLOGIES=varsha"};
	int pid;
	pid=fork();
	if(pid==0)
	{
		printf("this is child process\n");
		execle("/home/varsha/Mirafra_technologies/lsp/process_management/./zombie",args[0],(char*)0,envp);
		printf("this won't print\n");
	}
	else
	
		printf("this is parent process\n");

}


