#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[100],i,search,start,stop,mid;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("\nEnter array elements:\n");
	for(i = 0 ; i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the element you want to search:\n");
	scanf("%d",&search);
	start=0;
	stop=n-1;
	if (search < a[0] || search>a[n-1])
	{
		printf("\nNumber not found!");
		exit(0);
	}
	while(start<=stop)
	{
		mid=(start+stop)/2;
		if(search==a[mid])
		{
			printf("\nNumber found! at index %d",mid);
			break;
		}
		if(search<a[mid])
			stop=mid-1;
		if(search>a[mid])
			start=mid+1;
	}
	if(start>stop)
		printf("\nNumber not found!");
	getch();
}
