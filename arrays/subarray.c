//check if subarray with 0 sum exists or not?

#include<stdio.h>
void subarray(int arr[],int n)
{
	int i,j,k,sum=0;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=i;j<n;j++)
			{
				sum=sum+arr[j];
				if(sum==0)
				{       
					printf("subarray elements are\n");
					for(k=i;k<=j;k++)
					{
					printf("%d\n",arr[k]);
				}
			}
	}
}
}

int main()
{
	int n,i,j;
	printf("enter the size\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	subarray(arr,n);
}
