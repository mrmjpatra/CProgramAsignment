/*Write a program to input a square matrix (a matrix of order n × n) and then print its upper triangular matrix.*/

#include <stdio.h>

int main()
{

    int A[5][5], C[5][5], size, i, j;

    printf("Enter the  Order of the square matrix\n");
    scanf("%d", &size);

    printf("Enter the %d X %d matrix\n", size, size);

    for (i = 0; i < size; i++)
    {
        printf("Enter the elements of %d row\n", i + 1);
        for (j = 0; j < size; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("The entered matrix is : \n");

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");




    // The Transpose of Matrix A
    int isSymmetric = 1;
    for (i = 0; i < size && isSymmetric; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (A[i][j] != C[i][j])
            {
                isSymmetric=0;
                break;
            }
        }
    }
    if(isSymmetric == 1)
    {
        printf("\nThe given matrix is Symmetric matrix: \n");
    }
    else
    {
        printf("\nThe given matrix is not Symmetric matrix.");
    }
}