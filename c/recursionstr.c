#include<stdio.h>
void function(char str[]);
int main()
{
	char str[6]="varsha";
	function(str);
	//printf("%s",str);
}

void function(char str[])
{
	int i=0;
	for(i=0;str[i]!=0;i++)
	{
	if(str[i]!='\0')
		return ;
	else
	{
	function(str+i);
	}
	printf("%s",str);
	}
}

