#include<stdio.h>
void mystrncpy(char d[],char s[],int n)
{
	int i=0;
	while(s[i]!=0&&i<n)
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
	int n;
	printf("enter the strings\n");
	scanf("%s%s",s,d);
	printf("enter the number\n");
	scanf("%d",&n);
	mystrncpy(d,s,n);
	printf("%s",d);
}


