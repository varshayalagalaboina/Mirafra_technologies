#include<stdio.h>
int main()
{
	int i,j,temp,c=0,c1=0;
	int num[5]={3,1,1,3,1};
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
		if(num[i]==num[i+1])
		{
			c++;
		}
		else
		{
			c1++;
		}
}
	
	printf("%d\n%d\n",c,c1);
}


