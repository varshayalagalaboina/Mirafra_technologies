#include<stdio.h>
static struct student
{
	char name[20];
	int rollno;
	float marks;
}stu1;

int main(void)
{
	//struct student stu1={"varsha",439,94};
	printf("enter name rollno marks\n");
	scanf("%s%d%f",stu1.name,&stu1.rollno,&stu1.marks);
	printf("%s\n%d\n%f\n",stu1.name,stu1.rollno,stu1.marks);
}
