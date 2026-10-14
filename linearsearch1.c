#include<stdio.h>
#include<conio.h>
void main()
{
	int a[30],i,n,key,found=0;
	printf("enter no.of elements:");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter elemt to search:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("element found at %d position\n",i+1);
			found=1;
			break;
			
		}
		
	}
	if(found==0)
	{
		printf("elemnt not found");
	}
		
	
}
