#include<stdio.h>
int main()
{
	int *ptr;
	int var=20;
	ptr=&var;
	printf("%d\n",var);
	printf("%d\n",*ptr);
	printf("%p\n",ptr);
}

