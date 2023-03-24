#include<stdio.h>
union academic1
{
	int per;
	float cgpa;
	char grade;
};
struct academic2
{
	int per;
	float cgpa;
	char grade;
};
int main()
{
	struct academic2 s={90,4,'A'};
	union academic1  u={95,6,'B'};
	printf("%d\n%f\n%c\n",s.per,s.cgpa,s.grade);
	printf("%d%f%c\n",u.per,u.cgpa,u.grade);
}
