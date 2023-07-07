#include<stdio.h>
#include<string.h>
void mystrcpy(char d[],char s[])
{
	int i=0;
	while(s[i]!=0)
	{
		d[i]=s[i];
		i++;
	}
//	d[i]=s[i];
}
int main()
{
	char s[100];
	char d[100];
	printf("enter the strings\n");
	scanf("%s%s",s,d);
	mystrcpy(d,s);
	printf("%s",d);
}
