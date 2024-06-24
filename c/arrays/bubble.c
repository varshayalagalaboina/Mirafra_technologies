#include<stdio.h>
int main()
{
	int i,j,temp;
	int num[5]={3,2,1,4,5};
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(num[i]<num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}

		}
	}
	for(i=0;i<5;i++)
{
	printf("%d\n",num[i]);
}
}


