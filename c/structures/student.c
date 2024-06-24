#include<stdio.h>

struct student
{
	char name[20];
	int age;
	float totalmarks;
};

int main()
{
	struct student student1,student2;
	printf("enter student1 name , age , total marks\n");
	scanf("%s%d%f",student1.name,&student1.age,&student1.totalmarks);
	printf("enter student2 name , age , total matks\n");
	scanf("%s%d%f",student2.name,&student2.age,&student2.totalmarks);
	printf("student1 details\n");
	printf("%s\n%d\n%f\n",student1.name,student1.age,student1.totalmarks);
	printf("student2 details\n");
	printf("%s\n%d\n%f\n",student2.name,student2.age,student2.totalmarks);
	float avgmarks=(student1.totalmarks+student2.totalmarks)/2;
	printf("avg marks\n");
	printf("%f\n",avgmarks);
}
