#include<stdio.h>
int main()
{
	int i,arr[10],c1=0,c2=0;
	printf("enter the elements\n");
	for(i=0;i<9;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			c1=c1+1;
		}
		else

			c2=c2+1;
	}
printf("%d%d",c1,c2);
}

