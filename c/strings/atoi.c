#include<stdio.h>
int main()
{
	int i,r=0;
	char str[100]="123";
	for(i=0;str[i]!=0;i++)
	{
		r=r*10+str[i]-'0';
	}
	printf("%d\n",r);
}
