#include<stdio.h>
int main()
{
	int n=0x18;
	int i;
	int x;
		x=(n&0x0F)<<4|(n&0xF0)>>4;
	printf("%x",x);
}

