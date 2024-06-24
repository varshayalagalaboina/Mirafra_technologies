#include<stdio.h>
int main()
{
	int i;
	int arr1[5];
	int arr2[5];
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<5;i++)
	{
		arr2[i]=arr1[i];
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr2[i]);
	}
}
