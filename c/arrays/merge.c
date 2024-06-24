#include<stdio.h>
int main()
{
	int i,j=0,k,s1,s2,s3;
	int arr1[100],arr2[100],arr3[100];
	printf("enter s1\n");
	scanf("%d",&s1);
	printf("enter the elements\n");
	for(i=0;i<s1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("enter s2\n");
	scanf("%d",&s2);
	printf("enter the arr2 elements\n");
	for(i=0;i<s2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	s3=s1+s2;
	printf("size=%d\n",s3);
	for(i=0;i<s1;i++)
	{
		arr3[i]=arr1[i];

	}	
	for(j=0;j<s2;j++)
	{
		arr3[i]=arr2[j];
		i++;
	}
	for(i=0;i<s3-1;i++)
	{
		for(k=0;k<s3;k++)
		{
			if(arr3[k]<=arr3[k+1])
			{
				j=arr3[k];
				arr3[k]=arr3[k+1];
				arr3[k+1]=j;
			}
		}
	}
	printf("arr3 elements\n");
	for(i=0;i<s3;i++)
	{
		printf("%d\n",arr3[i]);
	}
}
