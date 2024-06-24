// Write a program in C for adding two matrices of the same size
#include<stdio.h>
int main()
{
	int i,j,arr[50][50],arr2[50][50],arr3[50][50],n;
	printf("enter n\n");
	scanf("%d",&n);
	printf("enter the arry1 elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("element - [%d],[%d] : ", i, j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("arra1 matrix\n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
	}
	printf("\n");
	printf("enter the array2 elements");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("element - [%d],[%d] : ", i, j);
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("arr2 matrix\n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
	}
	printf("\n");
	printf("addition of two matrices\n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			arr3[i][j]=arr[i][j]+arr2[i][j];
		}
	}

	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr3[i][j]);
		}
	}

	printf("\n\n");
}


