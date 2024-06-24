#include<stdio.h>
int main()
{
	char s[100];
	int i,j,l,temp;
	printf("enter the string\n");
	scanf("%s",s);
	for(l=0;s[l]!=0;l++);
	for(i=0,j=l-1;i<=j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	printf("%s",s);
}
