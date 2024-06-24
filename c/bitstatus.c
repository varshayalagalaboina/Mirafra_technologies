#include<stdio.h>
int main()
{
int n=0x14,p=3;
if(n&(1<<p))
{
printf("bit set");
}
else
{
printf("bit reset");
}
}

