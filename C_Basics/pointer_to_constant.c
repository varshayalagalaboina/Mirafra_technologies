#include<stdio.h>
int main()
{
	int x=5,y=10;
	int const *ptr; //pointer to constant
	ptr=&x;
//	*ptr=10;
	printf("%d\n",x);
	ptr=&y;
//	*ptr=20;
	printf("%d\n",y);
}

