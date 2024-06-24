#include<stdio.h>
int main()
{
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={3,6,4,9,10};
	int sumarray[5];
	int i;
	for(i=0;i<5;i++)
	{
		sumarray[i]=arr1[i]+arr2[i];
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",sumarray[i]);
	}
}


