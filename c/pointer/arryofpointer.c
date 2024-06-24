#include<stdio.h>
int main()
{
	int *arr[3];
	int i,a=2,b=5,c=6;
	arr[0]=&a;
	arr[1]=&b;
	arr[2]=&c;
	for(i=0;i<3;i++)
	{
		printf("%d\n",*arr[i]);
	}
}
