#include<stdio.h>
int main()
{
	int i,j,c=0;
	int arr[6]={1,1,3,5,9,8};
	for(i=0;i<6;i++)
	{
		c=0;
		for(j=0;j<6;j++)
		{
			if(i!=j)
			{
				if(arr[i]==arr[j])
				{
					c=c+1;
				}

			}
		}
		if(c==0)
		{
		printf("unique=%d\n",arr[i]);
		}
	}
}

