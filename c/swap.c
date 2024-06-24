#include<stdio.h>
int main()
{
int a,b,t=0;
printf("enter the two num");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("%d %d\n",a,b);
}
