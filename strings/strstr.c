#include<stdio.h>
int mystrstr(char str[],char sub[])
{
	int i,j,b;
	for(i=0;str[i]!=0;i++)
	{
		b=i;
		for(j=0;sub[j]!=0;j++,b++)
		{
			if(str[b]!=sub[j])
			break;
			
		}
			if(sub[j]==0)
			return i;
	}
			return -1;
		
	
}
int main()
{
	char str[100];
	char sub[100];
	printf("enter the strings\n");
	scanf("%99s%99s",str,sub);
	printf("%d",mystrstr(str,sub));
}

