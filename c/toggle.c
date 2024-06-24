#include<stdio.h>
int main()
{
int n=0x12,p=1;
n=n^(1<<p);
printf("%x",n);
}
