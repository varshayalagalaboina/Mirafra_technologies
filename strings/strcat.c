#include<stdio.h>
void mystrcat(char d[],char s[])
{
	int i,j;
	for(i=0;d[i]!=0;i++);
	for(j=0;s[j]!=0;j++,i++)
	{
		d[i]=s[j];
	}
	d[i]=0;
}
int main()
{
	char s[100];
	char d[100];
	printf("enter the strings\n");
	scanf("%s%s",s,d);
	mystrcat(d,s);
	printf("%s",d);
}
