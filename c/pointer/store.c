//Write a program in C to store n elements in an array and print the elements using a pointer.
#include<stdio.h>
int main()
{
	int arr[10],i,n;
	printf("enter the n value\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	printf("the elements are\n");
	for(i=0;i<n;i++)
	{
		printf("{%d} %d\n",i,*(arr+i));
	}
}
