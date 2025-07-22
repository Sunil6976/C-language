#include<stdio.h>
main()
{
	int i,num;
	
	printf("enter the number:");
	scanf("%d",&num);
	printf("\n");
	
	for(i=0;i<=10;i++)
	{
		printf("\n%d X %d = %d",i,num,num*i);
	}
}
