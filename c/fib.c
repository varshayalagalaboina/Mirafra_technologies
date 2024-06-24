#include<stdio.h>
int fib(int n)
{
	if(n==1)
	{
		return 1;
	}
	else if(n==0)
	{
		return 0;
	}
	else
		return fib(n-1)+fib(n-2);
}
int main()
{
	int i,n=10;
	for(i=0;i<n;i++)
	{
		printf("%d\n",fib(i));
	}
}
