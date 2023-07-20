#include<stdio.h>
void duplicate(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("duplicate is %d\n",arr[i]);
			}
		}
	}
}
int main()
{
	int n,i;
	printf("enter the size\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	duplicate(arr,n);
}

