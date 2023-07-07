#include<stdio.h>
int palindrome(char str[])
{
	int l,k,i,j,x;
	for(l=0;str[l]!=0;l++);
	for(i=0,j=l-1;i<=j;i++,j--)
	{
		if(str[i]-str[j]==0)
		{
			x=1;
		}
		else
		{
			return 0;
		}
	}
	return x;
}
int main()
{
	char str[100];
	int c;
	printf("enter the string\n");
	scanf("%s",str);
	c=palindrome(str);
	if(c)
	{
		printf("palindrome\n");
	}
	else
	{

		printf("not palindrome\n");
	}
}
