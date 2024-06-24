#include<stdio.h>
int main()
{
	int n=0x56,p1=2,p2=5,i;
	if((n&(1<<p1))!=(n&(1<<p2)))
	{
		n=n^(1<<p1);
		n=n^(1<<p2);
	}
	printf("%x\n",n);
}


