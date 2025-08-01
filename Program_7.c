/*Program : Display array elements in reverse order using a recursive function @ M_S_Vismaya
Completed on:25/07/2025*/

#include <stdio.h>

void displayReverse(int a[],int i) 
{
    if (i<0)
        return;

    printf("%d ",a[i]);
    displayReverse(a,i-1);
}

int main() 
{
    int a[100],n,j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(j= 0;j<n;j++) 
	{
        scanf("%d", &a[j]);
    }

    printf("Array in reverse order: ");
    displayReverse(a,n-1);

    return 0;
}
