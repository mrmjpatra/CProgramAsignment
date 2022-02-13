/* Write a program using function to input a m x n matrix (of integers) and then find the largest, the 2nd largest, the smallest, and the 2nd smallest numbers in it*/
#include <stdio.h>

void createMatrix(int arr[50][50], int row, int col)
{
    printf("Enter the element to the %d X %d Matrix\n", row, col);
    for (int i = 0; i < row; i++)
    {
        printf("Enter the elements to the %d row\n", i + 1);
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void showMatrix(int arr[50][50], int row, int col)
{
    printf("Entered Matrix \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void sort(int arr[50][50], int row, int col)
{
    int temp;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < arr[i][j])
            {
                temp = arr[i][j];
                arr[i][j] = arr[i][j];
                arr[i][j] = temp;
            }
        }
    }
}

int largest(int arr[50][50], int row, int col)
{
    int max = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    printf("The largest element is: %d\n", max);

    int m = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > m)
            {
                if (arr[i][j] == max)
                {
                    continue;
                }

                m = arr[i][j];
            }
        }
    }
    printf("The 2nd largest element is: %d\n", m);
    return max;
}

void smallest(int arr[50][50], int row, int col, int max)
{
    int min = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    printf("The smallest element is: %d\n", min);

    int m = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < max)
            {
                if (arr[i][j] == min)
                {
                    continue;
                }

                m = arr[i][j];
            }
        }
    }
    printf("The 2nd smallest element is: %d\n", m);
}

void main()
{

    int arr[50][50];
    int row, col, len, max;
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &row);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &col);

    createMatrix(arr, row, col);
    // showMatrix(arr, row, col);
    // max = largest(arr, row, col);
    // smallest(arr, row, col, max);

    int temp;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < arr[i][j])
            {
                temp = arr[i][j];
                arr[i][j] = arr[i][j];
                arr[i][j] = temp;
            }
        }
    }
     showMatrix(arr, row, col);
}