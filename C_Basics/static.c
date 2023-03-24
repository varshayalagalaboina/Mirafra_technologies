#include<stdio.h>
/*static int x=8;
int main()
{
//static int x=9;
printf("%d",x);
}*/
void fun();
int main()
{
fun();
fun();
}
void fun()
{
static int a=4,b=7;
printf("%d\n%d\n",a,b);
a++;
b++;
}

