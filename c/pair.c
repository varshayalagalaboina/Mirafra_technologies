#include<stdio.h>
int main()
{
	int n,t=10,i,j;
	int arr[]={8,7,2,3,5};
	n=(sizeof arr)/(sizeof arr[0]);
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(arr[i]+arr[j]==t)
				{
					printf("pair found(%d,%d)",arr[i],arr[j]);
				}
			}
		}
}
