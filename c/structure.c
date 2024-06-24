#include<stdio.h>
int main()
{
	struct student
	{
		int id;
		char name[10];
		int  marks;
	}stu;
	stu.id=10;
	printf("enter the student name marks\n");
	scanf("%s%d",stu.name,&stu.marks);
	printf("id= %d\n name= %s\n marks=%d\n",stu.id,stu.name,stu.marks);
}
