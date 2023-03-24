#include<stdio.h>
int main()
{
	int x=9,y=10;
	int *const ptr=&x; //constant to pointer
//	ptr=&x;
	*ptr=10;
	printf("%d\n",x);
//	ptr=&y;
	*ptr=20;
	printf("%d\n",y);
}

