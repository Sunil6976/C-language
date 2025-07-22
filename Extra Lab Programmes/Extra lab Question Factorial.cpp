#include<stdio.h>
main()
{
	int i,n,factorial=1;
	
	printf("enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	printf("factorial of %d is =%d",n,factorial);
}
