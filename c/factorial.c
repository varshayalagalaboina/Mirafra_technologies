#include<stdio.h>
int fact(int n);
int main()
{
	int i,n,x;
	printf("enter the number\n");
	scanf("%d",&n);
	x=fact(n);
	printf("%d",x);
}
int fact(int n)
{
	if(n!=1)
	{
		return n*fact(n-1);
}
}
