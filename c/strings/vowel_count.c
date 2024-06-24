//Write a program in C to count the total number of vowels or consonants in a string.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 100
int main()
{
	int i=0,vow,con,l;
	i=vow=con=0;
	char str[size];
	printf("enter the string\n");
	//scanf("%s",str);
	fgets(str,sizeof str,stdin);	
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'||str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			vow++;
		}
		else if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
		{
			con++;
		}
	}
	printf("vowel count%d\n",vow);
	printf("consonants count%d\n",con);
}


