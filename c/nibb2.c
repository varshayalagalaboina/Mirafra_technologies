#include<stdio.h>
int main()
{
int n=0x23,x;
n=((n&0x0F)<<4)|((n&0XF0)>>4);
printf("%x\n",n);
}
