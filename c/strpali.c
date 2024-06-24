
#include<stdio.h>
int main()
{
	int i,j,l,k;
	char str[100]="mam";
	for(l=0;str[l]!=0;l++);
	for(i=0,j=l-1;i<=j;i++,j--)
	{
		if((str[i]==str[j]))
		{
			k=1;
		}
		else
		{
			k=0;
			break;
		}
	}
	if(k==1)
	{
		printf("pali");
	}
	else
		printf("not pali");
}
