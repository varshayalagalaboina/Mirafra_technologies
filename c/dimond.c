#include<stdio.h>
int main()
{
	int i,n=5,spaces,star;
	for(i=0;i<n;i++)
	{
		for(spaces=n;spaces>0;spaces--)
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
		printf("\n");
}
