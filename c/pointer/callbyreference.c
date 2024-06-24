#include<stdio.h>
void callbyref(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
int main()
{
	int a,b;
	printf("enter the elements\n");
	scanf("%d%d",&a,&b);
	callbyref(&a,&b);
	printf("after call by ref %d,%d\n",a,b);
}
