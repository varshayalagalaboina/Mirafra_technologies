//strstr....

#include<stdio.h>
int strsub(char str[],char sub[])
{
	int i,j,d;
	for(i=0;str[i]!=0;i++)
	{
		d=i;
		for(j=0;sub[j]!=0;j++,d++)
		{
			if(str[d]!=sub[j])
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
	printf("enter the string and sub string\n");
	scanf("%99s%99s",str,sub);
	printf("%d",strsub(str,sub));
}
