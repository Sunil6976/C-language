#include<stdio.h>
main()
{
	int num;
	printf("\n emter the number:");
	scanf("%d",&num);
	
	if(num==0)
    {
    	printf("zero");
		}	
		else if(num<0)
		{
			printf("\nnegative");
		}
		else
		{
			printf("\npositive");
		}
}
