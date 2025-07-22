#include<stdio.h>
main()
{
	int num1,num2,ans;
	char choice;
	float ans1;
	
	printf("\npress 1 for addition:");
	printf("\npress 2 for subtraction:");
	printf("\npress 3 for multiplication:");
	printf("\npress 4 for division:");
	printf("\n enter your choice:");
	scanf("%c",&choice);
	
	printf("\n enter the value of num1 and num2:");
	scanf("%d%d",&num1,&num2);
	 ans=num1+num2;
	 printf("\n addition=%d",ans);
	 ans=num1-num2;
	 printf("\n subtraction=%d",ans);
	 ans=num1*num2;
	 printf("\n multiplication=%d",ans);
	 ans1=num1/num2;
	 printf("\n division=%f",ans1);
}
