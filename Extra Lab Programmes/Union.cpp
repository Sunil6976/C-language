#include<stdio.h>
union student
{
	int enroll;
	char name[20];
};
main()
{
	union student s;
	printf("\n enter student enroll and name");
	scanf("\n %d%s",&s.enroll,s.name);
	printf("\n %d \t %s ",s.enroll,s.name);
}
