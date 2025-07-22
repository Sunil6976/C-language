#include<stdio.h>
struct student
{
	char name[20];
	int enroll;
};
main()
{

struct student s[3];

	int i;
	for(i=0;i<3;i++)  
	{
		printf("\nenter %d student enroll and name",i+1);
		scanf("%d%s",&s[i].enroll,s[i].name);
	}
	for(i=0;i<3;i++)
	{
		printf("\n enroll   \t name");
		for(i=0;i<3;i++)
		{
			printf("\n %d   \t %s",s[i].enroll,s[i].name);
		}
	}

}
