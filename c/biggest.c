#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("%d is greater",a);
}
else if(b>c)
{
printf("%d is greater",b);
}
else
printf("%d is greater",c);
}
