//atoii

#include<stdio.h>
int atoi(char str[])
{
	int res=0,i=0,sign=1;
	if(str[0]=='-')
	{
		sign=-1;
		i++;
	}
	for(i=0;str[i];i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			res=res*10+str[i]-'0';
		}
		else
			break;
		//res=res*sign
	}
	res=res*sign;

	return res;
}
//int atoi(char str[]);
int main()
{
	char str[100];
	int x;
	printf("enter a string\n");
	scanf("%s",str);
	x=atoi(str);
	printf("%d",x);
}


