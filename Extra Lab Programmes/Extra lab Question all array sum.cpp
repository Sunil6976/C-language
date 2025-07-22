#include<stdio.h>
main()
{
	int arr[5];
	int i;
	int sum=0;
	int size ;
	for(i=0;i<5;i++);
	{
	
	printf("enter the size of array:");
	scanf("%d",&size);
	
	printf("enter array element:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<size;i++)
	{
		sum+=arr[i];
	}
}
	printf("sum of all array elements: %d",sum);
}
