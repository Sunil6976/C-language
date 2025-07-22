#include<stdio.h>
struct employee
{
	int employeeid;
	char name[20];
	char address[20];
	char email[20];
};
main()
{
    struct employee e1;
    struct employee e2;
    struct employee e3;
    
    printf("\n enter the first employee id and name and address and email");
    scanf("%d%s%s%s",&e1.employeeid,e1.name,e1.address,e1.email);
    printf("\n enter the second employee id and name and address and email");
    scanf("%d%s%s%s",&e2.employeeid,e2.name,e2.address,e2.email);
    printf("\n enter the third employee id and name and address and email");
    scanf("%d%s%s%s",&e3.employeeid,e3.name,e3.address,e3.email);
    
    printf("\n employeeid=%d \tname=%s \taddress=%s \temail=%s",e1.employeeid,e1.name,e1.address,e1.email);
    printf("\n employeeid=%d \tname=%s  \taddress=%s \temail=%s",e2.employeeid,e2.name,e2.address,e2.email);
    printf("\n employeeid=%d \tname=%d  \taddress=%s  \temail=%s",e3.employeeid,e3.name,e3.address,e3.email);
}
