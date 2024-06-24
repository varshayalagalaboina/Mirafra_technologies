#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i=0;
	printf("enter the string\n");
	scanf("%s",str);
	while(str[i]!='\0')
	{
		printf("%c  ",str[i]);
		i++;
	}
	printf("\n");
}
