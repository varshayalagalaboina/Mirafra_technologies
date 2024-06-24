#include<stdio.h>
void function(int n);
int main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	function(n);
}

void function(int n)
{
	static int r=0;
	int x=0;
	if(n==0)
		return ;
	r=n%2;
	x++;
	return function(n/2);
	printf("%d",n);
}
