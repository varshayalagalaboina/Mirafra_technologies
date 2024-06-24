//Write a program in C to read n number of values in an array and display them in reverse order.
#include<stdio.h>
int main()
{
	int i;
	//int n;
	int arr[5];
	//printf("enter the n value\n");
	printf("enter the elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("reversed numbers are\n");
	for(i=4;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
}

