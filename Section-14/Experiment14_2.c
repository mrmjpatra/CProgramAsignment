/*Write a program to find the transpose of a sparse matrix given in 3-tuple from. */
#include <stdio.h>
void transpose(int sparse[][3],int row)
{
    int matrix[3][row],k=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[j][k] = sparse[j][i];
            k++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }
}

void main()
{

    int sparse[20][3],row;
    printf("Enter the number of row : ");
    scanf("%d", &row);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &sparse[i][j]);
        }
    }
    transpose(sparse,row);
}
