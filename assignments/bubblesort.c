//bubblesort
#include<stdio.h>
int main()
{
	int i,j,n,temp;
	printf("enter the size\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
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
}		printf("after bubblesort\n");
		for(i=0;i<n;i++)
		{
			printf(" %d\n",arr[i]);

		}		
}
