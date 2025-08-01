/*Program : Write a program to find the Determinant of a matrix (2x2 and 3x3) @ M_S_Vismaya
Completed on:25/07/2025*/

#include <stdio.h>

int main() 
{
    int matrix[3][3],i,j,choice,det;
    printf("Choose matrix size:\n");
    printf("1. 2x2 Matrix\n");
    printf("2. 3x3 Matrix\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) 
	{
        printf("Enter elements of 2x2 matrix:\n");
        for (i = 0; i < 2; i++) 
		{
            for (j = 0; j < 2; j++) 
			{
                scanf("%d", &matrix[i][j]);
            }
        }
        det = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

        printf("Determinant of 2x2 matrix = %d\n", det);
    }
    else if (choice == 2) 
	{
        printf("Enter elements of 3x3 matrix:\n");
        for (i = 0; i < 3; i++) 
		{
            for (j = 0; j < 3; j++) 
			{
                scanf("%d", &matrix[i][j]);
            }
        }
        det = matrix[0][0]*(matrix[1][1]*matrix[2][2] - matrix[1][2]*matrix[2][1])
            - matrix[0][1]*(matrix[1][0]*matrix[2][2] - matrix[1][2]*matrix[2][0])
            + matrix[0][2]*(matrix[1][0]*matrix[2][1] - matrix[1][1]*matrix[2][0]);

        printf("Determinant of 3x3 matrix = %d\n", det);
    }
    else 
	{
        printf("Invalid choice!\n");
    }

    return 0;
}
