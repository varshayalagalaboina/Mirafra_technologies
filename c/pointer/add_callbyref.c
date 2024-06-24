#include<stdio.h>
void add(int *a,int *b)
{
	int sum=0;
	sum=*a+*b;
	printf("%d\n",sum);
}
void add(int *a,int *b);
int main()
{
	int x,y;
	printf("enter the numbers\n");
	scanf("%d%d",&x,&y);
	add(&x,&y);
}

