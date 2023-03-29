//atoi

#include<stdio.h>
int atoi(char str[])
{
	int i,sum=0;
	for(i=0;str[i]!=0;i++)
	{
		sum=sum*10;
		sum=sum+str[i]-48;
	}
	return sum;
}
//int atoi(char str[]);
int main()
{
        char str[100];
	int x;
	printf("enter a string\n");
	scanf("%s",str);
	x=atoi(str);
	printf("%d",x);
}

