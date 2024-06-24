#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i;
	printf("enter the string\n");
	scanf("%s",str);
	for(i=0;str[i]!=0;i++);
	printf("%d",i);
}
