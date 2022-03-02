//Write a program using function to input a m x n matrix (of integers) and then transpose it.
#include <stdio.h>

void create(int row, int col, int matrix[row][col])
{
    printf("Enter the elements to the %dX%d\n",row,col);
    for (int i = 0; i < row; i++)
    {
        printf("Enter the elements to %d row\n",i+1);
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void print(int m, int n, int arr[m][n])
{
    int i, j;
    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
        {

            printf("%5d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void transposeMatrix(int row, int col, int matrix[row][col], int trans[col][row])
{

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            trans[i][j] = matrix[j][i];
        }
    }
}

int main()
{
    int row, col;
    printf("Enter the number of row : ");
    scanf("%d", &row);
    printf("Enter the number of column : ");
    scanf("%d", &col);
    int matrix[row][col], trans[col][row];
    create(row, col, matrix);
    printf("The entered matrix is : \n");
    print(row, col, matrix);
    transposeMatrix(row, col, matrix, trans);
    printf("The tranpose of entered matrix is :\n");
    print(col, row, trans);
    return 0;
}
