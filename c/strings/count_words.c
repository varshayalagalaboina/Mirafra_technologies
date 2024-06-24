#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 100
int main()
{
	char str[size];
	int i=0,count=1;
	printf("enter the string\n");
	fgets(str, sizeof str, stdin);
	printf("string\n");
	while(str[i]!='\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') 
		{
			count++;
		}
	i++;
	}
	printf("num of words is %d",count-1);
}


