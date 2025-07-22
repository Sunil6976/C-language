#include<stdio.h>
main()
{
	int marks,per,english,hindi,science,math,gk;
	int marks1=500;
	printf("\n enter the marks of english:");
	scanf("%d",&english);
	printf("\n enter the marks of hindi:");
	scanf("%d",&hindi);
	printf("\n enter the marks of science:");
	scanf("%d",&science);
	printf("\n enter the marks of math:");
	scanf("%d",&math);
	printf("\n enter the marks of gk:");
	scanf("%d",&gk);
	
	marks=english+hindi+math+science+gk;
	per=marks/marks1*100;
	
	if(per<=100 && per>90)
	{
		printf("A grade");
	}
	else if(per<=90 && per>75)
	{
		printf("B grade");
	}
	else if(per<=75 && per>50)
	{
		printf("c grade");
    }
    else if(per<=50)
    {
    	printf("D grade");
	}
}
	
	
