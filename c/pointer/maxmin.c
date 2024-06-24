//Write a program in C to find the maximum number between two numbers using a pointer.
#include<stdio.h>
int main()
{
	int a,b;
	int *ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	printf("enter the values\n");
	scanf("%d%d",&a,&b);
	if(*ptr1>*ptr2)
	{
		printf("max=%d\n",*ptr1);
	}
	else
	{
		printf("max=%d\n",*ptr2);
	}
}

