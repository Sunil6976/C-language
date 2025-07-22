#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the value of a and b and c:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<=b && a<=c)
	{
		printf("%d is smallest number",a);
	}
	else if(b<=a && b<=c)
	{
		printf("%d is smallest number",b);
	}
	else 
	{
		printf("%d is smallest number",c);
	}
}
