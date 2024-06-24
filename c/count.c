#include<stdio.h>
int main()
{
	int i=0;
	int n=7;
		int c=0;
		for(i=0;i<(sizeof(n)*8);i++)
		{
			if(n&1==1)
			{
				c++;
			}
			n=n>>1;
		}
	printf("%d",c);
}

