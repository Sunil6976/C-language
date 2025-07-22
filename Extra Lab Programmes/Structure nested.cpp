#include<stdio.h>
struct subject
{
	char sname[20];
};
struct student
{
	int enroll;
	char name[20];
	struct subject sub1;
};

main()
{
	 struct student s1;
	 printf("\n enter enroll number and name:");
	 scanf("%d%s%s",&s1.enroll,s1.name,s1.sub1.sname);
	 
	 printf("\n enroll is %d",s1.enroll);
	 printf("\n name is %s",s1.sub1.sname);
	 
	 
}
	

