/*Program : Write a program to Perform the addition of two matrix and Subtraction of one matrix from another @ M_S_Vismaya
Completed on:25/07/2025*/

#include <stdio.h>
int main() 
{
    int a[10][10], b[10][10], sum[10][10], diff[10][10];
    int i, j, rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\nMatrix Addition Result:\n");
    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix Subtraction Result:\n");
    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
