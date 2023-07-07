#include<stdio.h>
int atoi(char str[])
{
	int i;
        int sum=0;
	for(i=0;str[i]!=0;i++)
	{
		sum=sum*10;
		sum=sum+str[i]-48;
	}
	return sum;
}
int main()
{
	char str[100];
	int a;
	printf("enter the string\n");
	scanf("%s",str);
	a=atoi(str);
	printf("%d",a);
}
