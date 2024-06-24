#include<stdio.h>
int main()
{
	int arr[5]={7,10,5,100,3};
	int *ptr;
	ptr=arr;
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(arr+i));
	}
}
