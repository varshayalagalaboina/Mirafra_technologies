//Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define str_size  100
int main()
{
	char str[str_size];
	printf("enter the string\n");
	//scanf("%s",str);
	fgets(str, sizeof str, stdin);
	int i=0,alpha,spl,dig;
	i=alpha=spl=dig=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
		{
			alpha++;
		}
		else if(str[i]>='0'&&str[i]<='9')
		{
			dig++;
		}
		else
		{
			spl++;
		}
		i++;
	}
		printf("alphabets are%d\n",alpha);
		printf("special are%d\n",spl);
		printf("digit are%d\n",dig);
}
