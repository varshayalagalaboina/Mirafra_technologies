#include<stdio.h>
int main()
{
	int n=0x56,i,j;
	for(i=31,j=0;i>j;i--,j++)
	{
		if((n&(1<<i))!=(n&(1<<j)))
		{
			n=n^(1<<i);
			n=n^(1<<j);
		}
	}
	printf("%x\n",n);
}

