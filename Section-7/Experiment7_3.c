/*Write a program that finds the sum of each row and sum of each column of a matrix.*/

#include <stdio.h>

void main()
{
    int A[10][10], rowSize, colSize, i, j, sumRow = 0, sumCol = 0;

    printf("Enter the number of Rows : \n");
    scanf("%d", &rowSize);
    printf("Enter the number of Columns : \n");
    scanf("%d", &colSize);

    for (i = 0; i < rowSize; i++)
    {
        printf("Enter the elementf of the %d row\n", i + 1);
        for (j = 0; j < colSize; j++)

        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nThe entered Matrix is :\n");
    for (i = 0; i < rowSize; i++)
    {
        for (j = 0; j < colSize; j++)

        {
            printf("%d \t", A[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rowSize; i++)
    {
        for (j = 0; j < colSize; j++)
        {
            sumRow = sumRow + A[i][j];
        }
        
        printf("The sum of %d Row element is : %d\n", i + 1, sumRow);
        sumRow=0;
    }

    printf("\n\n");
    for (i = 0; i < colSize; i++)
    {
        for (j = 0; j < rowSize; j++)
        {
            sumCol = sumCol + A[j][i];
        }
        
        printf("The sum of %d Column element is : %d\n", i + 1, sumCol);
        sumCol=0;
    }
}
