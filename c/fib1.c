#include<stdio.h>
int fibonacci(int n);
int main()
{
	int i,n,f;
	printf("Enter n fibonacci : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=fibonacci(i);
		printf("%d   ",f);
	}
	printf("\n");
}
int fibonacci(int n)
{
	static int i=1,j=1;
	int k;
	k=i+j;
	j=i;
	i=k;
	if(n==1 || n==2)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}


