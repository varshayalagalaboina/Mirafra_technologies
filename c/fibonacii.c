#include<stdio.h>
int main()
{
	int n;
	int a=0,b=1,c,i=0;
	printf("enter the num\n");
	scanf("%d",&n);
	printf("%d\n%d\n",a,b);
	for(i=0;i<=n;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
}

