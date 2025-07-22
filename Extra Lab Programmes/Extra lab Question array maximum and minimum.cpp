#include<stdio.h>
main()
{
	int arr[5] = {2,7,9,3,6};
	int n=sizeof(arr[0]);
	int max=arr[0];
	int min=arr[0];
	
	
	for(int i=1;i<n;i++)
	{
		if (arr[i]>max)
		{
			max=arr[i];
		}
		if (arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\n maximum value :%d",max);
	printf("\n minimum value :%d",min);
	

}
