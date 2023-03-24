#include<stdio.h>
int a,b;
int addition()
{
extern int a,b;
return a+b;
}
int main()
{
int add;
printf("enter the values\n");
scanf("%d%d",&a,&b);
add=addition();
printf("%d",add);
}
