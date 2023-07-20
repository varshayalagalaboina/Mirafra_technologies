//sort binary array in linear time?
#include<stdio.h>
void binary(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	
	}
	printf("the binary sorted array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
int main()
{
	int n,i;
	printf("enter the size\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	binary(arr,n);
//	printf("%d%d",arr,n);
}
