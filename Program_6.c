/*Program : Display the array elements in the same order using a recursive function @ M_S_Vismaya
Completed on:25/07/2025*/

#include <stdio.h>

void display(int a[],int i,int n) 
{
    if (i==n)
        return;

    printf("%d ",a[i]);
    display(a,i+1,n);
}

int main() 
{
    int a[100],n,j;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(j= 0;j<n;j++) 
	{
        scanf("%d",&a[j]);
    }
    printf("Array elements: ");
    display(a,0,n);
    return 0;
}
