#include<stdio.h>
main()
{
	int i,n;
	
	printf("enter the number:");
	scanf("%d",&n);
	int a=0;
	int b=1;
	int c=a+b;
	printf("%d %d",a,b);
	
	for(i=3;i<=n;i++)
	
	{
	 printf("%d",c);
	 a=b;
	 b=c;
	 c=a+b;
	}
}
