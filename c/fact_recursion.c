#include<stdio.h>
int function(int n);
int main()
{
int n;
printf("enter the number:?");
scanf("%d",&n);
int x=function(n);
printf("%d",x);
}

int function(int n)
{
if(n==0)
return 1;
return n*function(n-1);
}
