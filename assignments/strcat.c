//string concatenation...

#include<stdio.h>
void mystrcat(char str1[],char str2[])
{
	int i,j;
	for(i=0;str2[i]!=0;i++);
	for(j=0;str1[j]!=0;i++,j++)
		str2[i]=str1[j];

}
int main()
{
	char str1[40];
	char str2[40];
//	int x;
	printf("enter two strings\n");
	scanf("%s%s",str1,str2);
        mystrcat(str1,str2);
	printf("%s",str2);
}
