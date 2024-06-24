#include<stdio.h>
int main()
{
	int a=10;
	int *ptr1=&a;
	int **ptr2=&ptr1;
	printf("%d\n",a);
	printf("%p\n",&a);
	printf("%d\n",*(ptr1+0));
	printf("%p\n",ptr1);
	printf("%p\n",&ptr1);
	printf("%p\n",*(ptr2+0));
	printf("%p\n",ptr2);
	printf("%p\n",&ptr2);
	printf("%d\n",*(*(ptr2+0)+0));
}
