//string ncat...

#include<stdio.h>
void mystrncat(char d[],char s[],int n)
{
	int i,j;
	for(i=0;d[i]!=0;i++);
	for(j=0;s[j]!=0&&j<n;i++,j++)
	{
		d[i]=s[j];
	}
}
int main()
{
	char s[100];
	char d[100];
	int n;
	printf("enter the strings\n");
	scanf("%99s %99s",s,d);
	printf("enter a number\n");
	scanf("%d",&n);
	mystrncat(d,s,n);
	printf("%s",d);
}

