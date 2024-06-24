#include<stdio.h>
int main()
{
	int i,j,temp;
	int arr[5]={7,10,5,100,3};
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr[i]<=arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);

	}
}

