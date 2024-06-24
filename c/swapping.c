#include<stdio.h>
int main()
{
	int n=0x78;
	int i=0;
	int b1,b2,x,result;
	for(i=0;i<8;i++)
	{
		b1=(n>>1)&1;
		b2=(n>>5)&1;
		x=(b1^b2);
		x=(x<<1)|(x<<5);
		result=n^x;
	}
	printf("%x",result);
}


