#include<stdio.h>
void stringlen(char *str)
{
	int l=0;
	while(*str!='\0')
	{
		l++;
		*str++;
	}
	printf("%d\n",l);
}
int main()
{
	char *str="varsha";
	stringlen(str);
}
