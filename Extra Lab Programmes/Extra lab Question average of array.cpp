#include<stdio.h>
main()
{
	int arr[5];
	int i;
	int sum=0;
	float ave;
	int size ;
	
	
	printf("enter the size of array:");
	scanf("%d",&size);
	
	printf("enter array element:");
	for(i=0;i<5;i++)
	{
	scanf("%d",&arr[i]);
}
	
	for(i=0;i<5;i++)
	{
		sum+=arr[i];
	}
    ave=sum/arr[i];
	printf("average of all array elements: %f",ave);
}
