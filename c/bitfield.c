#include<stdio.h>
struct abc
{
unsigned int a:16;
unsigned int b:31;
//unsigned int :0;
unsigned int d:31;
};

int main()
{
printf("%ld\n",sizeof(struct abc));
}

