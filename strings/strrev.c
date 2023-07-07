#include<stdio.h>
void strrev(char str[])
{
	int i,j;
	int temp;
	for(i=0;str[i]!=0;i++);
	for(i=i-1,j=0;i>=j&&j<i/2;j++,i--)
	{
	temp=str[i];
	str[i]=str[j];
	str[j]=temp;
	}
}
int main()
{
	char str[100];
	//int n;
	//printf("enter the length of the string\n");
//	scanf("%d",&n);
	printf("enter the string\n");
	scanf("%s",str);
	strrev(str);
	printf("%s",str);
}

	

