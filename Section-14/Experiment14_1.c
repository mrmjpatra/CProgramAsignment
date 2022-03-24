/* Write a program to convert a sparse matrix given in regular form to 3-tuple form.*/
#include <stdio.h>
#define ROW 4
#define COL 5

void sparseMatrix(int matrix[][COL], int m, int n)
{
    int sparse[m * n][3];
    int nonZeroElement = 0, r = 1;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != 0)
            {
                nonZeroElement++;
            }
        }
    }
    sparse[0][0] = m;
    sparse[0][1] = n;
    sparse[0][2] = nonZeroElement;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != 0)
            {
                sparse[r][0] = i;
                sparse[r][1] = j;
                sparse[r][2] = matrix[i][j];
                r++;
            }
        }
    }

    for (int i = 0; i < nonZeroElement + 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", sparse[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int matrix[ROW][COL], i, j;
    printf("Enter the elements to the Matrix\n");
    for (i = 0; i < ROW; i++)
    {
        printf("Enter the elements to the %d-Row\n", i + 1);
        for (j = 0; j < COL; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The Entered Matrix is\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    sparseMatrix(matrix, ROW, COL);
}