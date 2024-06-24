#include<stdio.h>
void function(char *str);
int main()
{
	char str[6]="hi dud";
	function(str);
	printf("\n");
}

void function(char *str)
{
	if(*str==0)
		return ;
	function(str+1);
	printf("%c",*str);
}

