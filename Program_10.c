/*Program : Write a program to find the transpose of a matrix @ M_S_Vismaya
Completed on:25/07/2025*/

#include <stdio.h>

int main() 
{
    int m[10][10], trans[10][10];
    int i, j, rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            scanf("%d", &m[i][j]);
        }
    }
    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            trans[j][i] = m[i][j];
        }
    }
    printf("\nOriginal Matrix:\n");
    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of the Matrix:\n");
    for(i = 0; i < cols; i++) 
	{
        for(j = 0; j < rows; j++) 
		{
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
