#include<stdio.h>
int main()
{
	int i,j,temp,c=0;
	int arr[8]={1,1,7,7,5,5,8,9};
	for(i=0;i<8;i++)
	{
		for(j=i+1;j<8;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<8;i++)
	{
		printf("%d\n",arr[i]);
	}

	for(i=0;i<8;i++)
	{
		if(arr[i]==arr[i+1])
		{
			c=c+1;
		}
	}
	printf("the duplicate elements are %d\n",c);
}

