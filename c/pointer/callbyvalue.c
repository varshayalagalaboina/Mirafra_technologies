#include<stdio.h>
void callby(int a,int b);
int main()
{
	int a,b;
	printf("enter the values\n");
	scanf("%d%d",&a,&b);
	callby(a,b);
	printf("after callby value%d %d\n",a,b);
}
void callby(int a, int b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
