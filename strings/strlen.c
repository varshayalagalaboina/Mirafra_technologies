#include<stdio.h>
int mystrlen(char str[]);
int main()
{
	char str[100];
	printf("enter the string\n");
	scanf("%s",str);
	//mystrlen(str);
	printf("%d",mystrlen(str));
}
int mystrlen(char str[])
{
	int i=0;
	while(str[i]!=0)
	{
		i++;
	}
	return i;
}
