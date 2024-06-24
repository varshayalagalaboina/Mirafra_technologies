#include<stdio.h>
int main()
{
	int n,i=1,r,s=0;
	printf("enter the binary num\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		s=s+r*i;
		i=i*16;
	}
	printf("%d",s);
}
