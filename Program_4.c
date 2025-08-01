/*Program - Search for all occurence of an element in an integer array @ M_S_Vismaya
Completed on: 23/07/2025*/
#include<stdio.h>
int main()
{
	int a[50],i,n,key,found=0;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	
	printf("Enter %d elements into the array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the element to search:");
	scanf("%d",&key);
	
	printf("Element %d found at positions:",key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("%d ",i);
			found=1;
		}
	}
	
	if(!found)
	{
		printf("Element not found");
	}
	return 0;
}
