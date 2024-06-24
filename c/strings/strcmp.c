#include<stdio.h>
int strcmp(char str1[],char str2[])
{
int i,j;
for(i=0,j=0;str1[i]!=0&&str2[j]!=0;i++,j++)
{
if(str1[i]>str2[j])
return -1;
if(str1[i]<str2[j])
return 1;
if(str1[i]==str1[j])
return 0;
}
if(str1[i]!=0&&str2[j]==0)
return -1;
if(str1[i]==0&&str2[j]!=0)
return 1;
if(str1[i]==0&&str2[j]==0)
return 0;
}

int main()
{
int x;
char str1[100];
char str2[100];
printf("enter two strings\n");
scanf("%s%s",str1,str2);
x=strcmp(str1,str2);
printf("%d",x);
}
