#include<stdio.h>
void addition();
int main()
{
extern int a,b,c;
printf("enter the values\n");
scanf("%d%d",&a,&b);
addition();
printf("add=%d\n",c);
}
int a,b,c;
void addition()
{
c=a+b;
}
