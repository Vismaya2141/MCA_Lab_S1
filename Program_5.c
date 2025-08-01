/*Program : Sort the array elements in ascending order(minimum 3 function:read,disp and sort) @ M_S_Vismaya
Completed on:23/07/2025*/

#include<stdio.h>
void read(int a[],int n)
{
	int i;
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void disp(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void sort(int a[],int n)
{
	int temp,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
}
void read(int a[], int n);
void disp(int a[], int n);
void sort(int a[], int n);
int main()
{
	int a[50],n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	read(a,n);
	printf("Original array:\n");
	disp(a,n);
	sort(a,n);
	printf("Sorted array:\n");
	disp(a,n);
	return 0;
}
