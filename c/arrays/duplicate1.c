#include<stdio.h>
int main()
{
	int i,j,c=0;
	int arr[6]={1,1,3,5,9,8};
	printf("duplicate elements are\n");
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(arr[i]==arr[i+1])
			{
				printf("%d\n",arr[i]);
				c=c+1;
				break;
			}
		}
	}
	printf(" no of duplicates %d\n",c);
}
