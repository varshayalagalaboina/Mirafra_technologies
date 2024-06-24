#include<stdio.h>
#include<string.h>
void mystrcpy(char d[],char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		d[i]=s[i];
		i++;
	}
	d[i]=s[i];
}
int main()
{
	char d[100];
	char s[100];
	printf("enter the strings\n");
	scanf("%99s%99s",d,s);
	mystrcpy(d,s);
	printf("%s",d);
}
