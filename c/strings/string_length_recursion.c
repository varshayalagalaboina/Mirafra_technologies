#include<stdio.h>
int function(char *str);
int main()
{
	char str[]="whts up man";
	int x=function(str);
	printf("%d\n",x);
}

int function(char *str)
{
	static int count=0;
	if(*str==0)
		return count;
	str=str+1;
	count++;
	return function(str);
}


