#include<stdio.h>
int main()
{
	int n=0x87654321,x;
	x=(n&0xFF000000>>24)|(n&0x000000FF<<24)|(n&0x00FF0000>>8)|(n&0x0000FF00<<8);
	printf("%x",x);
}
