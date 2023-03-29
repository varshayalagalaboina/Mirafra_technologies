#include<stdio.h>
void mymemcpy(void *dst,void *src,int s)
{
	if(dst==0||src==0)
	return;
	for(char i=0;i<s;i++)
	{
		*((char *)dst)=*((char *)src);

		dst++;
		src++;
	}
}
int main()
{
	//int x;
	char dst[100],src[100];
	int s;
	printf("enter src and dst\n");
	scanf("%s%s",src,dst);
	printf("Enter the size:\n");
	scanf("%d",&s);
	mymemcpy(&dst,&src,s);
	printf("%s",dst);
}
