//string char..(first occurance)

#include<stdio.h>
int mystrchr(char str[],char c)
{
	int i;
       //char c;
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]==c)
		{
			break;
		}
	}
	return i;
}
int main()
{
	char str[100];
	char c;
	//int x;
	printf("enter a string\n");
	scanf("%s",str);
 	printf("enter a character\n");
        getchar();
	scanf("%c",&c);
	printf("%d",mystrchr(str,c));
}


