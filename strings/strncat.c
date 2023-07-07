#include<stdio.h>
void mystrncat(char d[],char s[],int n)
{
	int i,j;
	for(i=0;d[i]!=0;i++);
	for(j=0;s[j]!=0&&j<n;j++,i++)
	{
		d[i]=s[j];
	}
//	d[i]=s[j];
}
int main()
{
	char s[100];
	char d[100];
	int n;
	printf("enter the strings\n");
	scanf("%s%s",s,d);
	//getchar();
	printf("enter the n value\n");
	scanf("%d",&n);
	mystrncat(d,s,n);
	printf("%s",d);
}
