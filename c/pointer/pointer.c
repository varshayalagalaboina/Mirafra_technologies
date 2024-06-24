#include<stdio.h>
int main()
{
//int a=10,b=20;
//int *p=&a;
//printf("%p\n",p);
//printf("%d",*p);
int a=10;
int *p=&a;
int **q=&p;
int ***r=&q;
//printf("%d",*p++);
//printf("%d",++*p);
//printf("%d",(*p)++);
printf("p address%p\n q address%p\n r address %p\n",p,q,r);
printf("p value%d\n q value %d\n r value %d\n",*p,**q,***r);
}
