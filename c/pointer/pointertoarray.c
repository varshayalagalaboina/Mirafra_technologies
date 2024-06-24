#include<stdio.h>
int main()
{
int i;
int arr[3]={2,4,5};
int (*p)[3];
p=&arr;
for(i=0;i<3;i++)
{
printf("%d\n",(*p)[i]);
}
}
