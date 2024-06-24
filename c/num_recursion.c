#include<stdio.h>
void number(int n)
{
	if(n<1)
		return;
	else
	{
		number(n-1);
		printf("%d\n",n);
	}
}
int main()
{
	int n=10;
	number(n);
}
