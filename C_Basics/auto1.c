#include<stdio.h>
void fun();
int main()
{
fun();
fun();
}
void fun()
{
auto int a=4,b=7;
printf("%d\n%d\n",a,b);
a++;
b++;
}

