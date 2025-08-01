#include<stdio.h>
#define size 100
int main()
{
	int matrix[10][10];
	int i,j,k=0;
	int row[size],column[size],val[size];
	int r,c;
	printf("Enter number of rows and columns:");
	scanf("%d%d",&r,&c);
	printf("Enter the matrix elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&matrix[i][j]);
			if(matrix[i][j]!=0)
			{
				row[k]=i;
				column[k]=j;
				val[k]=matrix[i][j];
				k++;
			}
		}
	}
	printf("Original matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ", matrix[i][j]);
        }
        printf("\n");
	}
	printf("\nSparse Matrix (row column value):\n");
    for (i = 0; i < k; i++) 
	{
        printf("%d\t%d\t%d\n", row[i], column[i], val[i]);
    }
    return 0;
}
