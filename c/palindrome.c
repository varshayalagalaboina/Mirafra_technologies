#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,j,l,temp;
	char v[100]="";
	printf("enter the string\n");
	scanf("%s",s);
	strcpy(v,s);
	/*for(i=0;s[i]!=0;i++)
	{
		v[i]=s[i];
	}
	v[i]=0;*/
	printf("%s\n",v);
	for(l=0;s[l]!=0;l++);
	printf("%d\n",l);
	for(i=0,j=l-1;i<=j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	//	s[i]="0";
	printf("%s\n",s);

	if(s==v)
	{
		printf("palindrome\n");
	}
	else
	{
		printf("not palindrome\n");
	}
}
