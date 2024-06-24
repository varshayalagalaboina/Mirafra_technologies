#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,len,temp;
	char s[100]="zyxw";
	for(len=0;s[len]!='\0';len++);
	printf("len=%d\n",len);
	for(i=1;s[i]!='\0';i++)
	{
		for(j=0;j<len-i;j++)
		{
			//if (s[i]>=65 && s[i]<=92)
			//{
				if(s[j]>=s[j+1])
				{
					temp=s[j];
					s[j]=s[j+1];
					s[j+1]=temp;

				}
			//}
		}
	}
		printf("%s",s);
}
