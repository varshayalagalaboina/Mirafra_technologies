#include<stdio.h>
int main()
{
	int i=0;
	char str1[100];
	char str2[100];
	printf("enter the both strings\n");
	scanf("%s%s",str1,str2);
	while(str2[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i]=str1[i];
	printf("%s\n",str1);
	printf("%s\n",str2);
}

