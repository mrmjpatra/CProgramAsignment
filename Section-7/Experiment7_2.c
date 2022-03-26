/*Write a program to input a square matrix (a matrix of order n × n) and then print its upper triangular matrix.*/

#include <stdio.h>

void main()
{
    int A[5][5], size, i, j;

    printf("Enter the Order of the Square Matrix\n");
    scanf("%d", &size);

    printf("Enter the elements of %d X %d Matrix\n", size, size);

    for (i = 0; i < size; i++)
    {
        printf("Enter the elements of %d row\n", i + 1);
        for (j = 0; j < size; j++)
        {
            scanf("%d", &A[i][j]);
        }
        printf("\n");
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

    printf("The Upper Triangular matrix is : \n");

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i > j)
                {
                    printf(" \t");
                }
            else{
                    printf("%d\t", A[i][j]);
                }
        }    
        printf("\n");
    }
    printf("\n");
}
