//Write a program in C to find the maximum and minimum elements in an array.
#include<stdio.h>
int main()
{
	int i,max,min;
	int arr[5];
	printf("enter theelements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			arr[i]=max;
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
		printf("maximum element is %d\n",max);
		printf("minimum element is %d\n",min);

}


