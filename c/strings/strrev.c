#include<stdio.h>
int main()
{
	char str[100];
	int i,j,temp;
	printf("enter the string\n");
	scanf("%s",str);
	for(i=0;str[i]!=0;i++);
	for(i=i-1,j=0;i>=0&&j<i/2;i--,j++)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf("%s",str);
}

