#include<stdio.h>
int main()
{
	int i,n=5,spaces,star;
	for(i=1;i<=n;i++)
	{
		for(spaces=n-i;spaces>0;spaces--)
		{
			printf(" ");
		}
		//printf("\n");
		for(star=0;star<2*i-1;star++)
		{
			printf("*");
		}
			printf("\n");
	}

	for(i=n;i>0;i--)
	{
		for(spaces=n-i;spaces>0;spaces--)
		{
			printf(" ");
		}
		//printf("\n");
		for(star=0;star<2*i-1;star++)
		{
			printf("*");
		}
			printf("\n");
	}
}


