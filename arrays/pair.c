#include<stdio.h>
void pair(int arr[],int n,int t)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==t)
			{
				printf("the pair of elements is (%d , %d)\n",arr[i],arr[j]);
			}
		}
	}
}
int main()
{
	int n,t,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the target\n");
	scanf("%d",&t);
	int arr[n];
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	pair(arr,n,t);
}
