#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="madam";
	int a=0;
	int b=strlen(str)-1;
	while(a<b)
	{
		if(str[a++]!=str[b--])
		{
			printf("not palindrom");
			break;
		}
		else
		{
			printf("palindrom");
			break;
		}	
	}
}
