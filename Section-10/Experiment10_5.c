/* */
#include <stdio.h>
void createMatrix(int matrix[][10], int row, int col)
{
    int i, j;
    printf("Enter the element to the %d X %d Matrix\n", row, col);
    for (i = 0; i < row; i++)
    {
        printf("Enter the elements to %d row\n", i + 1);
        for (j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void showMatrix(int matrix[][10], int row, int col)
{
    int i, j;
    printf("Entered Matrix is : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void ConvertLinearArray(int matrix[][10], int arr[], int row, int col, int size)
{
    int i, j, k = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            arr[k] = matrix[i][j];
            k++;
        }
    }
}
void sortArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void main()
{
    int row, col, size;
    int matrix[10][10];
    int arr[20];
    printf("Enter the number of rows : ");
    scanf("%d", &row);
    printf("Enter the number of columns : ");
    scanf("%d", &col);
    size = row * col;

    createMatrix(matrix, row, col);
    showMatrix(matrix, row, col);
    ConvertLinearArray(matrix, arr, row, col, size);
    sortArray(arr, size);

    printf("The largest integer in the Matrix is : %d\n", arr[size - 1]);
    printf("The 2nd largest integer in the Matrix is : %d\n", arr[size - 2]);
    printf("The smallest integer in the Matrix is : %d\n", arr[0]);
    printf("The 2nd smallest integer in the Matrix is :%d \n", arr[1]);
}
