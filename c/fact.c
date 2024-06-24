#include<stdio.h>
int main()
{
	int n,f=1;
	printf("enter the num\n");
	scanf("%d",&n);
	while(n!=0)
	{
		f=f*n;
		n--;
	}
	printf("%d\n",f);
}

