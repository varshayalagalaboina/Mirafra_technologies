#include<stdio.h>
int main()
{
	int i,j,temp=0;
	int arr[6]={5,4,10,1,6,2};
	for(i=1;i<6;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	for(i=0;i<6;i++)
	{
		printf("%d\n",arr[i]);
	}
}

