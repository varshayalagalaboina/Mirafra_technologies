#include<stdio.h>
#include<string.h>
int main()
{
	struct student
	{
		int id;
		char name[10];
		int  marks;
	};

	struct student stu;
	struct student *p=&stu;
	p->id=10;
	printf("enter the student name marks\n");
	scanf("%s %d",p->name,&p->marks);
	printf("id= %d\n name= %s\n marks=%d\n",p->id,p->name,p->marks);
}

