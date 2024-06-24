#include<stdio.h>
int main()
{
	int i=1,num,c=0;
	printf("enter the number\n");
	scanf("%d",&num);
	while(i<=num)
	{
		if(num%i==0)
		{
			c=c+1;
		}
		i++;
	}
	if(c==2)
	{
		printf("the given number is prime\n");
	}
	else
	{
		printf("not prime");
	}
}
