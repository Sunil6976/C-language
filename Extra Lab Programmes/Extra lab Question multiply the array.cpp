#include<stdio.h>
main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
	    printf("\n enter a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}
		
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n enter b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		c[i][j]=a[i][j]*b[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t a[%d][%d]=[%d]",i,j,c[i][j]);
		}
	}
}
