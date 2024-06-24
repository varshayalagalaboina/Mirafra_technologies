#include<stdio.h>
#include<string.h>
void strconcat(char str1[],char str2[])
{
	int i,j;
	for(i=0;str2[i]!=0;i++);
	for(j=0;str1[j]!=0;i++,j++)
	{
		str2[i]=str1[j];
	}
}
int main()
{
	char str1[100];
	char str2[100];
	printf("enter the strings\n");
	scanf("%s%s",str1,str2);
	strconcat(str1,str2);
	printf("%s",str2);
}
