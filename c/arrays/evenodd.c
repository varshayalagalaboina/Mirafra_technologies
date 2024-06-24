//Write a program in C to separate odd and even integers into separate arrays.
#include<stdio.h>
int main()
{
	int i,arr[6];
	printf("enter the elemets\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("even elements\n");
	for(i=0;i<6;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d\n",arr[i]);
		}
	}
	printf("odd elements\n");
	for(i=0;i<6;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%d\n",arr[i]);
		}
	}
}
