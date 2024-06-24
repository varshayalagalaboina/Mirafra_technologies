#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int y,a=10,b=40;
	int (*p)(int,int);
	p=&add;
	y=p(a,b);
	printf("%d",y);
}

