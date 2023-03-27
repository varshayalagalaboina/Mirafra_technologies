//Swap 2 variables without 3rd variable   (x = x+y; y= x-y; x = x-y;)
/*
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter two numbers\n");
	scanf("%d%d",&x,&y);
	printf("before swap x=%d y=%d\n",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("after swap x=%d y=%d\n",x,y);
}*/

//swap using bitwise....
/*
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter two numbers\n");
	scanf("%d%d",&x,&y);
	printf("before swap x=%d y=%d\n",x,y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("after swap x=%d y=%d\n",x,y);
}*/

//swap using inline....

#include<stdio.h>
static inline void swap(int *p,int *q)
{
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
}
int main()
{
	int p,q;
	printf("enter two numbers\n");
	scanf("%d%d",&p,&q);
	swap(&p,&q);
	printf("after swap p=%d,q=%d\n",p,q);
}




