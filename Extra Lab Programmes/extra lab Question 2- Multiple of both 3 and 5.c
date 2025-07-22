#include<stdio.h>
main()
{
	int num;
	printf("\n enter the number: ");
	scanf("%d",&num);
	
	if(num%3==0 && num%5==0)
	{
		printf("\n number is multiple of both 3 and 5",num);
	}
	else
	{
		printf("\n number is not multiple of both 3 and 5",num);
	}
}
