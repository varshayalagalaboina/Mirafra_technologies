#include<stdio.h>
void strcopy(char *s,char *d)
{
	int i=0;
	while(*s)
	{
		*d=*s;
		*s++;
		*d++;
	}
	*d++='\0';
}
int main()
{
	char s[100]="varsha";
	char d[100]="yadav";
	strcopy(s,d);
	printf("%s\n",d);
}
