// Write a program in C to find the second smallest element in an array.
#include<stdio.h>
int main()
{
	int i,j,temp,c=0;
	int num[9]={3,2,5,6,1,10,0,6,1};
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(num[i]<num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}

		}
	}
	for(i=0;i<9;i++)
	{

		printf("%d\n",num[i]);
	}
	for(i=0;i<9;i++)
	{
		if(num[i]!=num[i+1])
		{
		printf("%d\n",num[i]);
		}		
	}	
	printf("2nd smallest element is %d\n",num[1]);
}




